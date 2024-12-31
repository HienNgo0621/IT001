#include <iostream>
using namespace std;

int Input(){
    int n;
    cin>>n;
    return n;
}
int sum_even_divisor(int n){
    int sum=0;
    for (int i=2; i<=n; i++){
        if (n%i==0){
            sum+=i;
        }
    }
    return sum==0 ? -1 : sum;
}
int main() {
	int n;
	n=Input();
	cout << sum_even_divisor(n);
}
