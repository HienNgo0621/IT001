#include <iostream>
using namespace std;

#include<cmath>
bool square(int n){
    int a=sqrt(n);
    if (n<0){
        return false;
    }
    return a*a==n;
}
int sum_all_square(int n){
    int sum=0;
    for (int i=1; i<=n; i++){
        if (n%i==0 && square(i)){
            sum+=i;
        }
    }
    return sum;
}


int main() {
    int n;
    cin>>n;
    cout << sum_all_square(n);
}
