#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;
const int MOD = 1e9 + 7;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;

    set<string> a;

    while(cin >> s){
        a.insert(s);
    }

    cout << a.size() << endl;

    return 0;
}