#include<iostream>
#define MAX 100
using namespace std;

int main (){
    int n;
    int a[MAX];
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int max = a[0];
    for (int i = 0; i < n; i++){
        if (max < a[i]) max = a[i];
    }
    cout << max << endl << endl;
    int cnt = 0;
    for (int i = 0; i < n; i++){
        if (max == a[i]) cnt ++;
    }
    cout << cnt;
    return 0;

}
