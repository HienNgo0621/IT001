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
    for (int i = 1; i < n; i += 2){
        cout << a[i] << " ";
    }
    return 0;
}
