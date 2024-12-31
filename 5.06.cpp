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
    if (a==b){
        return a;
    }
    else if (a>b){
        return gcd(a-b,b);
    }
    else {
        return gcd(a,b-a);
    }
    return a;
}


int main() {
	int m, n;
	cin >> m >> n;
	cout << gcd(m, n);
	return 0;
}
