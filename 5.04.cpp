#include<iostream>

using namespace std;
bool isPrime(long n){
    if (n<2) return false;
    for (long i=2; i<n; i++){
        if (n%i==0) return false;
    }
    return true;
}

bool dao_Prime(int n){
    long dao=0;
    long a=n;
    for (long i=0; i*i<a; i++){
        if (isPrime(a)){
            if (n!=0){
                dao = dao*10 + n%10;
                n/=10;
            }
        }
    }
    for (long j=2; j<dao; j++){
        if (dao%j==0) return false;
    }
    return true;
}

int main (){
    long a, b;
    long long count=0;
    cin>>a>>b;
    for (long long i=a; i<=b; i++){
        if (isPrime(i) && dao_Prime(i)){
            count++;
        }

    }
    cout<<count;
    return 0;
}



/*#include<iostream>


using namespace std;
bool isPrime(int n){
    if (n<2) return false;
    for (int i=2; i<n; i++){
        if (n%i==0) return false;
    }
    return true;
}

int daoPrime(int n, int dao){
    if (n==0) return dao;
    return daoPrime(n/10, dao*10 + n%10);
}

int main (){
    int a, b, dao;
    int dem=0;
    cin>>a>>b;
    int i=a;
    while (i<=b){
        if (isPrime(i) && isPrime(daoPrime(i,0))){
            dem++;
        }
        i++;
    }
    cout<<dem;
    return 0;
}
*/
