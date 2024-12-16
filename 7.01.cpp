#include<iostream>
#define MAXA 50
#define MAXB 50
using namespace std;

int main (){
    int n, m;
    cin >> n >> m;
    float a[MAXA][MAXB];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
     for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;

}
