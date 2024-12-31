#include<iostream>
using namespace std;

struct dathuc{
    float heso;
    int mu;
};

void Nhap(dathuc a[], int n){
    for (int i = n; i >= 0; i --){
        a[i].mu = i;
        cin >> a[i].heso;
    }
}

void Xuat(dathuc a[], int n){
    for (int i = n; i >= 0; i --){
        char dau = (a[i].heso > 0) ? '+' : ' ';
        char dau1 = (a[i].heso > 0) ? '+' : '-';
        char daubaccaonhat = (a[i].heso > 0) ? '\0' : '-';
        if (a[i].heso == 0) continue;
        else if (i == n && (a[i].heso == 1 || a[i].heso == -1)) cout << daubaccaonhat << "x^" << i;
        else if (i == n && a[i].heso != 1) cout << a[i].heso << "x^" << i;
        else if ((a[i].heso == 1 || a[i].heso == -1) && i > 1) cout << dau1 << "x^" << a[i].mu;
        else if ((a[i].heso != 1 || a[i].heso != -1) && i > 1) cout << dau << a[i].heso << "x^" << a[i].mu;
        else if (i == 0) cout << dau << a[i].heso;
        else if (i == 1 && (a[i].heso == 1 || a[i].heso == -1)) cout << dau1 << "x";
        else if (i == 1 && a[i].heso != 1) cout << dau << a[i].heso << "x";
        else cout << dau << a[i].heso << "x^" << i;
    }
}

int main (){
    int n;
    dathuc a[100];
    cin >> n;
    Nhap(a, n);
    Xuat(a, n);
    return 0;
}

