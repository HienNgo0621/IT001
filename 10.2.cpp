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

void comp(PhanSo a, PhanSo b){
    int right = a.tu * b.mau;
    int left = b.tu * a.mau;
    if (right < left) cout << "Phan so thu nhat NHO hon phan so thu hai";
    else if (right > left) cout << "Phan so thu nhat LON hon phan so thu hai";
    else cout << "Hai phan so bang nhau";
}

int main(){
    PhanSo A, B;
    NhapPS1(A);
    NhapPS2(B);
    comp(A, B);
    return 0;
}

