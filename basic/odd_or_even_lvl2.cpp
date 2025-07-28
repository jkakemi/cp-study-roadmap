#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    int cases; cin >> cases;

    while(cases--){
        int a, b; cin >> a >> b;

        if(a == b){
            cout << 0 << endl;
            continue;
        }
        // se ele eh menor, subtraimos
        if(a < b){
            int need = b-a;
            // se o que ele precisa eh par
            if(need%2==0){
                cout << 2 << endl;           
            }
            // se o que ele precisa eh impar
            // 2 7 = -5 de diferenca | 3 10 
            else{
                cout << 1 << endl;
            }
        }
        // se a eh maior que b
        else{
            // 7 4 = -3 | 10 4 = -6 | 15 4 = -11
            int need = a-b;
            if(need%2==0){
                cout << 1 << endl;
            }
            else{
                cout << 2 << endl;
            }

        }
    }

    return 0;
}
// par com par = par
// impar com impar = par
// impar com par = impar

// QUALQUER INTEIRO POSITIVO IMPAR X > 0 PODE SOMAR COM A+X
// QUALQUER INTEIRO POSITIVO PAR  Y > 0 PODE SUBTRAIR COM A-Y
// 5
// 2 3
// 4 10
// 10 10
// 2 4
// 7 4
// 9 3
