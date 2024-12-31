#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300


void DemKyTu(char s[]) {
    int count[128] = {0};
    bool printed[128] = {false};

    int i = 0;
    while (s[i] != '\0') {
        count[(int)s[i]]++;
        i++;
    }

    for (int i = 0; s[i] != '\0'; i++) {
        if (!printed[(int)s[i]]) {
            printed[(int)s[i]] = true;
            cout << s[i] << ": " << count[(int)s[i]] << endl;
        }
    }
}
int myStrlen(char s[], int k){
    int len = k;
    int i = 0;
    while (s[i] != '\0') {
        len ++;
        i++;
    }
    return len;
}

int myStrcmp(char s1[MAX], char s2[MAX]){
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i]) {
            return 1;
        }
        i++;
    }
    if (s1[i] != s2[i]) {
        return 1;
    }
    return 0;
}


void DemKyTu(char s[]);
int myStrcmp(char s1[MAX], char s2[MAX]);
int myStrlen(char s[], int k);

int main()
{
	char s[MAX];
	//gets(s);	//Nhap chuoi s
	cin.getline(s,MAX);
	if (myStrcmp(s, "") == 0)
		cout << "Chuoi rong." << endl;
	else
		DemKyTu(s);

	return 0;
}
