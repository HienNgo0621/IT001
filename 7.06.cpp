#include <iostream>
using namespace std;
#define MAX 50

void Nhapmang(float a[MAX][MAX], int n, int m){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
}

bool isCheo(float a[MAX][MAX], int n, int m){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (i == j) continue;
            if (i != j && a[i][j] != 0) return false;
        }
    }
    return true;
}

int main (){
    int n, m;
    float a[MAX][MAX];
    cin >> n >> m;
    Nhapmang(a, n, m);
    if (isCheo(a, n ,m)) cout << "Yes";
    else cout << "No";
    return 0;
}
