#include <iomanip>
#include <iostream>
#include <stdio.h>
using namespace std;

struct SinhVien {
    char MASV[10];
    char HoTen[100];
    char NgaySinh[12];
    char GioiTinh;
    float DiemToan, DiemLy, DiemHoa, DTB;
};

void Nhap(SinhVien &A){
    cin.getline(A.MASV, 10);
    cin.getline(A.HoTen, 100);
    cin.getline(A.NgaySinh, 12);
    cin >> A.GioiTinh;
    cin >> A.DiemToan >> A.DiemLy >> A.DiemHoa;
}

void Xuat(SinhVien &A){
    cout << A.MASV << '\t';
    cout << A.HoTen<< '\t';
    cout << A.NgaySinh << '\t' << A.GioiTinh << '\t' << A.DiemToan << '\t' << A.DiemLy << '\t' << A.DiemHoa << '\t';
    A.DTB = ((A.DiemToan + A.DiemLy + A.DiemHoa)/3);
    cout << setprecision(3) << A.DTB;
}

int main() {
    SinhVien A;
    Nhap(A);
    Xuat(A);
    return 0;
}
