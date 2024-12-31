#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int n){
    if (n<2) return false;
    for (int i=2; i<n; i++)
    {
        if (n%i==0) return false;
    }
    return true;
}

int main () {
    int n, count=0, current=2, sum=0;
    do{
        cin>>n;
        if (n<=0 || n>50){
            cout<<"Gia tri vua nhap la "<<n<<", khong hop le. Vui long nhap lai."<<endl<<endl;
        }
    } while(n<=0 || n>50);

    while (count<n){
        if (isPrime(current)){
            sum+=current;
            count++;
        }
        current++;
    }

    cout<<"Tong "<<n<<" so nguyen to dau tien la: "<<sum;
    return 0;
}
