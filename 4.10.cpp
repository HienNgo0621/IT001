#include<iostream>
using namespace std;

int input(){
    int n;
    cin>>n;
    return n;
}

int giaithua(int n){
    int p=1;
    for (int i=n; i>0; i-=2){
        p*=i;
    }
    return p;
}

int main () {
    int n;
    n=input();
    cout<<giaithua(n);
    return 0;
}
