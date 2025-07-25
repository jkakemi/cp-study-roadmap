#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    int n, m; cin >> n >> m;

    int mat[n+1][m+1];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> mat[i][j];
        }
    }

    vector<int> better(m+1);


    for(int i=0; i<m; i++){
        int sum=0;
        for(int j=0; j<n; j++){
            sum+=mat[j][i];
        }
        better.push_back(sum);
    }

    sort(better.begin(), better.end());

    cout << better.back() << endl;

    return 0;
}

// 3 4
// 81 28 240 10
// 40 10 100 240
// 20 180 110 35



