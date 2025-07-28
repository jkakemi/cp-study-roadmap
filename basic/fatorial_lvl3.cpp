#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    long long fat=1;
    vector<int> a(1000001);
    for(int i=1; i<=1000000; i++){
        fat*=i;

        while (fat%10 == 0) fat /= 10;

        fat%=1000000;

        a[i] = fat%10;
    }

    int n, x=0;

    while(cin >> n){
        cout << "Instancia " << x+1 << endl;
        x++;
        cout << a[n] << endl;
        cout << endl;
    }

    return 0;
}