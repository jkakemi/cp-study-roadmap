#include <bits/stdc++.h>

using namespace std;

int dijkstra(int v, int inicio, int destino, vector<vector<pair<int, int>>> &grafo, int c)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<int> dist(v, INT_MAX);
    pq.push(make_pair(0, inicio));
    dist[inicio] = 0;

    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();

        for (auto x : grafo[u]) {
            int v = x.first;
            int weight = x.second;

            if (dist[v] > dist[u] + weight) {
                dist[v] = dist[u] + weight;
                pq.push(make_pair(dist[v], v));
            }
        }
    }
    return dist[destino];
}

int main()
{

    int n, m, c, k;

    while (cin >> n >> m >> c >> k)
    {
        if (n == 0 && m == 0 && c == 0 && k == 0)
        {
            break;
        }

        vector<vector<pair<int, int>>> grafo(n);
        int arestas = m;

        while (arestas--)
        {
            int u, v, w;
            cin >> u >> v >> w;

            if(u>=c && v>=c){ 
                grafo[u].push_back(make_pair(v, w));
                grafo[v].push_back(make_pair(u, w));
            }
            if(u>=c && v<c){ grafo[u].push_back(make_pair(v, w)); }
            if(u<c && v>=c){ grafo[v].push_back(make_pair(u, w)); }
            if(u<c && v<c && abs(u-v)==1){ 
                grafo[u].push_back(make_pair(v, w));
                grafo[v].push_back(make_pair(u, w));
            }
        }
        int x = dijkstra(n, k, c - 1, grafo, c);

        if (x != -1)
        {
            cout << x << endl;
        }   
    }

    return 0;
}