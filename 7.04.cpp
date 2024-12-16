#include <iostream>
using namespace std;
#define MAX 50

void Nhapmang(float a[][MAX], int n, int m){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
}

void Xuatmang(float a[][MAX], int n, int m){
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cout << a[j][i] << " ";
        }
        cout << endl << endl;
    }
}

int main (){
    int n, m;
    float a[MAX][MAX];
    cin >> n >> m;
    Nhapmang(a, n, m);
    Xuatmang(a, n, m);
    return 0;
}
