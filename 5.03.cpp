#include <iostream>
using namespace std;

int largest_input(){


    int a;
    cin>>a;
    if (a<=0) return 0;

    int max=largest_input();
    return (a<max) ? max : a;


}
int main(){
	cout << largest_input();
}

