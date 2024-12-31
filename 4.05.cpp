#include <iostream>

void input(int &n){
    std::cin>>n;
}

int TongChuSo(int n){
    int a=n;
    int sum=0;
    for (int i=1; i<n; i++){
        if (a!=0){
        sum+=a%10;
        a/=10;
        }
    }
    return sum;
}



int main() {
    int a;
    input(a);
    std::cout << TongChuSo(a);
    return 0;
}
