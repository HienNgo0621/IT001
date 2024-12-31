#include <iostream>


using namespace std;

int reserve_1(int n, int dao){
    if (n==0) return dao;
    return reserve_1(n/10, dao*10 + n%10);
}

int reverse(int n){
    return reserve_1(n,0);

}




int main() {
    int n;
    cin >> n;
    cout<<reverse(n);
}
