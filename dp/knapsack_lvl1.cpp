#include <bits/stdc++.h>

using namespace std;

long long knapsack(long long w, vector<long long>& val, vector<long long>& wt){
    vector<long long> dp(w+1, 0);

    for(int i=1; i<=wt.size(); i++){
        for(int j=w; j>=wt[i-1]; j--){
            dp[j] = max(dp[j], dp[j-wt[i-1]]+val[i-1]);
        }
    }

    return dp[w];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    long long n, w; cin >> n >> w;

    vector<long long> val(n);
    vector<long long> wt(n);

    for(int i=0; i<n; i++){
        cin >> wt[i] >> val[i];
    }

    cout << knapsack(w, val, wt) << endl;

    return 0;
}