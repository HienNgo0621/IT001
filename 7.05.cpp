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

float Trace(float a[][MAX], int n, int m){
    float sum = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (i == j) sum += a[i][j];
        }
    }
    return sum;
}


int main (){
    int n, m;
    float a[MAX][MAX];
    cin >> n >> m;
    Nhapmang(a, n, m);
    cout << Trace(a, n, m);
    return 0;
}

