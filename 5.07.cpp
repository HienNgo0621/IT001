#include <iostream>
#include <iomanip>
using namespace std;

#include<cmath>

double calculate(int n){
    double sum=0;
    if (n==1) return 1;
    return sqrt(n + calculate(n-1));
}




int main() {
	int n;
	cin >> n;
    cout <<fixed<<setprecision(2)<< calculate(n);
    return 0;
}
