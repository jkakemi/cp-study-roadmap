#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;
const int MOD = 1e9 + 7;

typedef long long ll;

vector<vector<pair<char, int>>> adj(256);

vector<int> dijkstra(char n){ 
    priority_queue<pair<int, char>, vector<pair<int, char>>, greater<pair<int, char>>> fila;
    vector<int> dist(256, INT_MAX);
    dist[n] = 0;
    fila.push({0, n});

    while(!fila.empty()){
        int u = fila.top().second;
        int d = fila.top().first;
        fila.pop();

        if(d > dist[u]) continue;

        for(auto x : adj[u]){
            int v = x.first;
            int peso = x.second;

            if(dist[v] > dist[u]+peso){
                dist[v] = dist[u]+peso;
                fila.push({dist[v], v});
            }
        }
    }

    return dist;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string original; cin >> original;
    string cripto; cin >> cripto;

    int n; cin >> n;

    cin.ignore();

    for(int i=0; i<n; i++){
        char a, b; int c;
        cin >> a >> b;
        cin.ignore();
        cin >> c;

        adj[a].push_back({b, c});
        //adj[b].push_back({a, c});
    }

    bool flag = false;
    int sum=0;
    for(int i=0; i<original.size(); i++){
        char a = original[i];
        char b = cripto[i];

        if(a == b) continue;

        auto dist = dijkstra(a);

        if(dist[b] == INT_MAX){
            flag = true;
            break;
        }

        sum+=dist[b];
    }

    if(flag) cout << -1 << endl;
    else cout << sum << endl;


    return 0;
}