#include <bits/stdc++.h>

using namespace std;

vector<int> parent;

int find(int i){
    if(parent[i]==i) return i;
    return parent[i] = find(parent[i]);
}

void unir(int i, int j){
    int a, b;
    a = find(i);
    b = find(j);

    if(a == b) return;
    parent[a] = b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m; cin >> n >> m;

    parent.resize(n+1);

    for(int i=1; i<=n; i++) parent[i] = i;

    for(int i=0; i<m; i++){
        string op;
        int u, v;
        cin >> op >> u >> v;
        if(op == "union"){
            unir(u, v);
        }
        else if(op == "get"){
            if(find(u) == find(v)){
                cout << "YES\n";
            }
            else cout << "NO\n";
        }
    }

    return 0;
}