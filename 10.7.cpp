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

void Nhap(SinhVien A[], int &n){
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i ++){
        cin.getline(A[i].MASV, 10);
        cin.getline(A[i].HoTen, 100);
        cin.getline(A[i].NgaySinh, 12);
        cin >> A[i].GioiTinh;
        cin >> A[i].DiemToan >> A[i].DiemLy >> A[i].DiemHoa;
        cin.ignore();
    }
}

void Xuat(SinhVien A[], int &n){
    for (int i = 0; i < n; i ++){
        cout << A[i].MASV << '\t';
        cout << A[i].HoTen<< '\t';
        cout << A[i].NgaySinh << '\t' << A[i].GioiTinh << '\t' << A[i].DiemToan << '\t' << A[i].DiemLy << '\t' << A[i].DiemHoa << '\t';
        A[i].DTB = ((A[i].DiemToan + A[i].DiemLy + A[i].DiemHoa)/3);
        cout << setprecision(3) << A[i].DTB << endl;
    }
}

void Hoanvi(SinhVien &a, SinhVien &b){
    SinhVien temp = a;
    a = b;
    b = temp;
}
#include <cstdlib>
void SapXepGiamTheoMASV(SinhVien a[], int &n){
    for (int i = 0; i < n - 1; i ++){
        for (int j = i + 1; j < n; j ++){
            if (atoi(a[i].MASV) < atoi(a[j].MASV)) Hoanvi(a[i], a[j]);
        }
    }
}

int main() {
    SinhVien A[MAXN];
    int n;
    Nhap(A, n);
    SapXepGiamTheoMASV(A, n);
    Xuat(A, n);
    return 0;
}
