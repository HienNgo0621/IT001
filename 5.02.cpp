#include <iostream>
#include <iomanip>
using namespace std;

double pow(double a, double b){
    double result=1.0;
    for (int i=0; i<b; i++){
        result*=a;
    }
    return result;
}

double giaithua(double n){
    if (n==1 || n==0) return 1;
    return n * giaithua(n-1);
}

double fabs(double x){
    return x<0 ? -x : x;
}

int main(){
    double x, term, s=0.0;
    int n=0;
    cin>>x;
    do {
        long long a = giaithua((2 * n) + 1);
        term = pow(-1,n) *(pow(x,2*n+1)/a);
        s+=term;
        n++;
    } while (fabs(term)>=0.00001);
    cout<<fixed<<setprecision(4)<<s;
    return 0;

}
