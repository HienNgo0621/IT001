#include <iostream>
using namespace std;

void input(int &n){
    cin>>n;
}
int input(){
    int n;
    cin>>n;
    return n;
}
int gcd(int a, int b){
    int save;
    for (int i=a; i<=a; i--){
        if(a%i==0 && b%i==0){
                save=i;
            break;
        }
    }
    return save;
}






int main() {
	int m, n;
	input(n);
	m=input();
	cout << gcd(m, n);
}
