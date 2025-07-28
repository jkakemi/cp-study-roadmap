#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;
const int MOD = 1e9 + 7;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    set<int> a;

    for(int i=0; i<n; i++){
        int x; cin >> x;
        a.insert(x);
    }

    int m; cin >> m;
    set<int> b;

    for(int i=0; i<m; i++){
        int y; cin >> y;
        b.insert(y);
    }

    int last1 = *a.rbegin();
    int last2 = *b.rbegin();

    cout << last1 << " " << last2 << endl;

    return 0;
}