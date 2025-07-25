#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    int n; cin >> n;

    int cont=0;

    for(int i=2; i<=sqrt(n); i++){
        if(n%i == 0) cont++;
    }

    if(cont==0) cout << "sim\n";
    else cout << "nao\n";

    return 0;
}