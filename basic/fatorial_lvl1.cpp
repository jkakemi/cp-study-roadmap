#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    int n; cin >> n;

    int fat=1;

    if(n == 0 || n == 1){
        cout << 1 << endl;
        return 0;
    }

    for(int i=n; i>0; i--){
        fat *= i;
    }

    cout << fat << endl;

    return 0;
}