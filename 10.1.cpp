#include<iostream>
#include<math.h>
using namespace std;

struct PhanSo {
    int tu;
    int mau;
};

void NhapPS(PhanSo a[], int &n){
    cin >> n;
    for (int i = 0; i < n; i ++){
        cin >> a[i].tu;
        cin >> a[i].mau;
    }
}

int UCLN(int a, int b){
    if (a == b) return a;
    else if (a > b) {
        return UCLN(a - b, b);}
    else return UCLN(a, b - a);
}

void Toigian(PhanSo a[], int n){
    for (int i = 0; i < n; i ++){
        int gcd = UCLN(abs(a[i].tu), abs(a[i].mau));
        a[i].tu = a[i].tu / gcd;
        a[i].mau = a[i].mau / gcd;
        if (a[i].mau == 0) cout << "Khong thoa yeu cau bai toan" << endl;

        if (a[i].mau < 0) {
            a[i].tu = - a[i].tu;
            a[i].mau = - a[i].mau;
        }

        if (a[i].tu % a[i].mau == 0) cout << (a[i].tu / a[i].mau) << endl;
        else cout << a[i].tu << "/" << a[i].mau << endl;
    }
}

int main (){
    PhanSo A[100];
    int n;
    NhapPS(A, n);
    Toigian(A, n);
    return 0;
}
