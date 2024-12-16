#include <iostream>
using namespace std;
#define MAX 16

void Nhapmang(int a[][MAX], int &n);
void Xuatmang(int a[][MAX], int n);
using namespace std;

int Fibo(int n){
    if (n == 0) return 0;
    if (n == 1) return 1;
    return Fibo(n - 1) + Fibo(n - 2);
}

void Nhapmang(int a[][MAX], int &n){
    cin >> n;
}

void Xuatmang(int a[][MAX], int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << Fibo(i + j + 1) << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n, a[MAX][MAX];
	Nhapmang(a,n);
	Xuatmang(a,n);

    return 0;
}
