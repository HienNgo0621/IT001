#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n){
    if (n<2) return false;
    for (int i=2; i<n; i++){
        if (n%i==0){
            return false;
            break;

        }
    }
    return n;
}
int sum_common_prime(int a, int b){
    int sum=0;
    for (int i=2; i<=a; i++){
        if(a%i==0 && b%i==0 && isPrime(i)) {
            sum+=i;
        }
    }
    return sum==0 ? -1 : sum;
}


int main() {
	int m, n;
	cin >> m >> n;
	cout << sum_common_prime(m, n);
}
