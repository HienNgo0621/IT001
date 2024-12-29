#include <iomanip>
#include <iostream>
using namespace std;
#define MAXN 100

struct SinhVien {
    string MASV;
    string HoTen;
    string NgaySinh;
    char GioiTinh;
    float DiemToan, DiemLy, DiemHoa, DTB;
};

void Nhap(SinhVien A[], int &n){
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i ++){
        getline(cin, A[i].MASV);
        getline(cin, A[i].HoTen);
        getline(cin, A[i].NgaySinh);
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

int main() {
    SinhVien A[MAXN];
    int n;
    Nhap(A, n);
    Xuat(A, n);
    return 0;
}



