#include <bits/stdc++.h>

using namespace std;

vector<vector<pair<int, int>>> adj;
vector<int> hospital;

vector<int> dijkstra(int n){
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> fila;
    vector<int> dist(n, INT_MAX);

    for(int i=0; i<hospital.size(); i++){
        dist[hospital[i]] = 0;
        fila.push({0, hospital[i]});
    }

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
    
    int n, m, q;
    
    while(cin >> n >> m >> q){
        bool flag = false;
        if(n == q){
            flag = true;
        }

        adj.resize(n+1);

        for(int i=0; i<m; i++){
            int u, v, w; cin >> u >> v >> w;

            adj[u].push_back({v, w});
            adj[v].push_back({u, w});
        }

        hospital.resize(q);

        for(int i=0; i<q; i++) cin >> hospital[i];

        auto dist = dijkstra(n+1);

        sort(dist.begin(), dist.end(), greater<int>());

        if(flag){
            cout << 0 << endl;
        }
        else{
            cout << dist[1] << endl;
        }

        hospital.clear();
        adj.clear();
    }

    return 0;
}
