#include <iostream>
using namespace std;
#define MAXA 50
#define MAXB 50

void Nhapmanga(float a[][MAXA], int m, int n){
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
}
void Nhapmangb(float b[][MAXB], int l, int k){
    for (int i = 0; i < l; i++){
        for (int j = 0; j < k; j++){
            cin >> b[i][j];
        }
    }
}

void Mult(float a[][MAXA], float b[][MAXB], int m, int n, int l, int k){
    for (int i = 0; i < m; i ++){
        for (int j = 0; j < k; j++){
            float mul = 0;
            for (int t = 0; t < n; t++){
                mul += a[i][t] * b[t][j];
            }
            cout << mul << " ";
        }
        cout << endl << endl;
    }
}

int main (){
    int m, n, l, k;
    float a[MAXA][MAXA], b[MAXB][MAXB];
    cin >> m >> n;
    Nhapmanga(a, m, n);
    cin >> l >> k;
    Nhapmangb(b, l, k);
    Mult(a, b, m, n, l, k);
    return 0;

}

