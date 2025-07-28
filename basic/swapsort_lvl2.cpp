#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int>> odd;

void selectionSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i=0; i<n-1; i++) {
        int min_idx=i;
        for (int j=i+1; j<n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        if(i != min_idx){
            odd.push_back({i, min_idx});
            swap(arr[i], arr[min_idx]);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    int n; cin >> n;

    vector<int> a(n);

    for(int i=0; i<n; i++) cin >> a[i];

    selectionSort(a);
    
    cout << odd.size() << endl;
    for(size_t i=0; i<odd.size(); i++){
        int a = odd[i].first;
        int b = odd[i].second;

        cout << a << " " << b << endl;
    }

    return 0;
}

// 5
// 0 1 2 3 4
// 5 2 5 1 4

// 1 2 5 5 4
// 1 2 4 5 5


// 2
// 0 3
// 4 2