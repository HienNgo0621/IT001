#include <iomanip>
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
#define MAXN 100

struct SinhVien {
    char MASV[10];
    char HoTen[100];
    char NgaySinh[12];
    char GioiTinh;
    float DiemToan, DiemLy, DiemHoa, DTB;
};

void Nhap(SinhVien a[], int &n){
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i ++){
        cin.getline(a[i].MASV, 10);
        cin.getline(a[i].HoTen, 100);
        cin.getline(a[i].NgaySinh, 12);
        cin >> a[i].GioiTinh >> a[i].DiemToan >> a[i].DiemLy >> a[i].DiemHoa;
        cin.ignore();
        a[i].DTB = (a[i].DiemToan + a[i].DiemLy + a[i].DiemHoa) / 3;
    }
}

void Xuat(SinhVien a[], int n){
    for (int i = 0; i < n; i ++){
        cout << a[i].MASV << '\t';
        cout << a[i].HoTen << '\t';
        cout << a[i].NgaySinh << '\t';
        cout << a[i].GioiTinh << '\t' << a[i].DiemToan << '\t' << a[i].DiemLy << '\t' << a[i].DiemHoa << '\t';
        cout << setprecision(3) << a[i].DTB << endl;
    }
}

void Nhap(char xoa[]){
    cin.getline(xoa, 100);
}

void XoaTheoHoTen(SinhVien a[], int &n, char xoa[]){
    int cnt = 0;
    for (int i = 0; i < n; i ++){
        if (strcmp(a[i].HoTen, xoa) != 0 ) a[cnt++] = a[i];
    }
    n = cnt;
}

int main() {
    SinhVien A[MAXN];
    char hoTenCanXoa[100];
    int n;

    Nhap(hoTenCanXoa);

    Nhap(A, n);

    XoaTheoHoTen(A, n, hoTenCanXoa);

    Xuat(A, n);
    return 0;
}

