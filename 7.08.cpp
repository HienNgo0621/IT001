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

bool isFrobenius(float a[][MAX], int n, int m){
    for (int i = 0; i < n; i++){
            if (a[i][i] != 1) return false;
        }
    int cntj = 0, t;
    for (int j = 0; j < n; j++){
        bool cocotkhac0 = false;
        for (int i = j + 1; i < n; i++){
            if (a[i][j] != 0){
                cocotkhac0 = true;
                break;
            }
        }
        if (cocotkhac0 == true) {
            t = j;
            cntj++;
        }
        if (cntj >= 2) return false;
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (i != j && cntj == 1 && a[i][j] != 0) {
                if (j == t) continue;
                return false;
            }
        }
    }
    return true;
}

int main (){
    int n, m;
    float a[MAX][MAX];
    cin >> n >> m;
    Nhapmang(a, n, m);
    if (isFrobenius(a, n ,m)) cout << "Yes";
    else cout << "No";
    return 0;
}


