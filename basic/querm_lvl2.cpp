#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;
const int MOD = 1e9 + 7;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    int x=0;
    while(cin >> n && n != 0){
        vector<int> a(n+1);

        for(int i=1; i<=n; i++) cin >> a[i];

        int pos = 0;
        for(int i=1; i<=n; i++){
            if(a[i] == i){
                pos = i;
                break;
            }
        }

        cout << "Teste " << x+1 << endl;
        cout << pos << endl;
        x++;
        cout << endl;
    }


    return 0;
}