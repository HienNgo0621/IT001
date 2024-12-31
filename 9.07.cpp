#include<iostream>
#define MAX 100
using namespace std;

int main (){
    int n, m;
    cin >> m >> n;
    float a[MAX][MAX];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j ++){
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++){
        int max = a[0][i];
        for (int j = 0; j < m; j ++){
            if (max < a[j][i]) max = a[j][i];
        }
        cout << "Gia tri lon nhat tren cot " << i << " la: " << max << endl << endl;
    }
    return 0;
}
