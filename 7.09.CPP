#include <iostream>
using namespace std;
#define MAXA 50
#define MAXB 50

void Nhapmanga(float a[][MAXA], int n, int m){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
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

void Sum(float a[][MAXA], float b[][MAXB], float c[MAXA][MAXB], int n, int m){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
                c[i][j] = a[i][j] + b[i][j];
                cout << c[i][j] << " ";
        }
        cout << endl << endl;
    }
}

int main (){
    int n, m, l, k;
    float a[MAXA][MAXA], b[MAXB][MAXB], c[MAXA][MAXB];
    cin >> n >> m;
    Nhapmanga(a, n, m);
    cin >> l >> k;
    Nhapmangb(b, l, k);
    Sum(a, b, c, n, m);
    return 0;

}
