#include <bits/stdc++.h>

using namespace std;

vector<vector<pair<int, int>>> adj;

vector<int> dijkstra(int s, int n){
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> fila;
    vector<int> dist(n, 0);

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

        vector<int> hospital(q);

        for(int i=0; i<q; i++) cin >> hospital[i];

        auto dist = dijkstra()

        // auto dist1 = dijkstra(1, n);
        // auto distN = dijkstra(n, n+1);

        // int maxi = 0;
        // for(int h : hospital){
        //     if(dist1[h] != INT_MAX && distN[h] != INT_MAX){
        //         maxi = max(maxi, dist1[h]+distN[h]);
        //     }
        // }

        // if(flag){
        //     cout << 0 << endl;
        //     continue;
        // }
        // cout << maxi << endl;

        adj.clear();
    }

    

    return 0;
}

// UNFINISHED