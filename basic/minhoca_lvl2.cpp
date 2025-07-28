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

    vector<int> betterColumn(m+1);
    vector<int> betterLine(n+1);

    int sum=0;
    for(int i=0; i<m; i++){
        sum=0;
        for(int j=0; j<n; j++){
            sum+=mat[j][i];
        }
        betterColumn.push_back(sum);
    }

    int sum2=0;
    for(int i=0; i<n; i++){
        sum2=0;
        for(int j=0; j<m; j++){
            sum2+=mat[i][j];
        }
        betterLine.push_back(sum2);
    }

    sort(betterLine.begin(), betterLine.end());
    sort(betterColumn.begin(), betterColumn.end());

    if(betterColumn.back() > betterLine.back()){
        cout << betterColumn.back() << endl;
    }
    else cout << betterLine.back() << endl;
    return 0;
}



