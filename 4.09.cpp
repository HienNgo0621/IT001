#include <iostream>
using namespace std;
#define MAX 300

int Fibo(int);

int main()
{
	int x;
	cin >> x;
	if (x < 1 || x>30)
		cout << "So " << x << " khong nam trong khoang [1,30]." << endl;
	else
	{
		cout << Fibo(x) << endl;
	}
	return 0;
}

int Fibo(int x)
{
    int s=1, f2, f1=1;
    for (int i=1; i<x; i++){

        f2=f1;
        f1=s;
        s= f1 + f2;

    }
    return f1;
}
