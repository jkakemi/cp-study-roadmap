#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;
const int MOD = 1e9 + 7;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int cases; cin >> cases;

    while(cases--){
        string s; cin >> s;

        string original = s;

        transform(s.begin(), s.end(), s.begin(), ::tolower);

        bool flag = true;
        for(int i=0; i<s.size()-1; i++){
            if(s[i] < s[i+1]){
                continue;
            }
            else{
                flag = false;
                break;
            }
        }

        if(flag){
            cout << original << ": O\n"; 
        }
        else{
            cout << original << ": N\n";
        }
    }

    return 0;
}