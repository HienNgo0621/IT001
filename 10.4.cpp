
#include<iostream>
#include<math.h>
using namespace std;

struct PhanSo {
    int tu;
    int mau;
};

void NhapPS1(PhanSo& a){
        cin >> a.tu;
        cin >> a.mau;
}

void NhapPS2(PhanSo& a){
        cin >> a.tu;
        cin >> a.mau;
}

PhanSo Div(PhanSo& a, PhanSo& b){
    PhanSo result;
    result.tu = a.tu * b.mau;
    result.mau = a.mau * b.tu;
    return result;
}

int UCLN(int a, int b){
    if (a == b) return a;
    if (a > b) return UCLN(a - b, b);
    else return UCLN(a, b - a);
}

void Toigian(PhanSo &a){
    int gcd = UCLN(abs(a.tu), abs(a.mau));
    a.tu /= gcd;
    a.mau /= gcd;
    if (a.mau == 0) return;
    if (a.tu % a.mau == 0) cout << a.tu / a.mau;
    else if (a.mau < 0){
        a.tu = -a.tu;
        a.mau = -a.mau;
    }
    else cout << a.tu << "/" << a.mau;
}

int main(){
    PhanSo A, B, Chia;
    NhapPS1(A);
    NhapPS2(B);
    Chia = Div(A, B);
    Toigian(Chia);
    return 0;
}
