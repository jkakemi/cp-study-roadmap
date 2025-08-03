#include <bits/stdc++.h>

using namespace std;

vector<vector<pair<int, int>>> adj;

int dijkstra(int s, int t, int n){
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

    return dist[t];

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int cases; cin >> cases;

    while(cases--){
        int n, m; cin >> n >> m;

        adj.resize(n+1);

        for(int i=0; i<m; i++){
            int u, v, w; cin >> u >> v >> w;

            adj[u].push_back({v, w});
        }

        int a, b; cin >> a >> b;

        int x = dijkstra(a, b, n+1);

        if(x != INT_MAX) cout << x << endl;
        else cout << "NO\n";

        adj.clear();
    }

    return 0;
}