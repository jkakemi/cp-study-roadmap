#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    int cases; cin >> cases;

    while(cases--){
        int n; cin >> n;
        vector<int> a(n);

        for(int i=0; i<n; i++) cin >> a[i];

        int badPrice = 0;
        int smaller = a[n-1];
        for(int i=n-1; i>=0; i--){
            if(smaller < a[i]){
                badPrice++;
            }
            else{
                smaller = a[i]; 
            }
        }

        cout << badPrice << endl;
    }

    return 0;
}