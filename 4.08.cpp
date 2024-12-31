#include <iostream>

using namespace std;
int reverse(int n){
    int a=n;
    int sum=0;
    for (int i=0; i<a; i++){
        if (n!=0){
            sum=sum*10 + n%10;
            n/=10;
        }
    }
    return sum;
}





int main() {
    int n;
    cin >> n;
    cout << reverse(n);
}
