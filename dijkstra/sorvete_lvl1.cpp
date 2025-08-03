#include <bits/stdc++.h>

using namespace std;

vector<vector<pair<int, int>>> adj;

vector<int> dijkstra(int s, int n){
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> fila;
    vector<int> dist(n, INT_MAX);

    fila.push({0, s});
    dist[s] = 0;

    while(!fila.empty()){
        int u = fila.top().second;
        fila.pop();

        for(auto x : adj[u]){
            int v = x.first;
            int peso = x.second;

            if(dist[v] > dist[u]+peso){
                dist[v] = dist[u] + peso;
                fila.push({dist[v], v});
            }
        }
    }

    return dist;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    int n, m, x; cin >> n >> m >> x;

    adj.resize(n+1);
    
    for(int i=0; i<m; i++){
        int u, v, w; cin >> u >> v >> w;

        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    vector<int> friends(x);

    for(int i=0; i<x; i++) cin >> friends[i];

    auto dist1 = dijkstra(1, n+1);
    auto distN = dijkstra(n, n+1);

    int distance = INT_MAX;
    for(int f : friends){
        if(dist1[f] != INT_MAX && distN[f] != INT_MAX){
            distance = min(distance, dist1[f]+distN[f]);
        }
    }

    cout << distance << endl;

    return 0;
}