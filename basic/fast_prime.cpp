#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    int cases; cin >> cases;

    while(cases--){
        int n; cin >> n;

        int cont=0;

        for(int i=2; i<=sqrt(n); i++){
            if(n%i == 0){
                cont++;
            }
        }

        if(cont==0) cout << "Prime\n";
        else cout << "Not Prime\n";
    }

    return 0;
}