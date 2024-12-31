#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

int myStrlen(char s[], int k); //Ham tra ve chieu dai chuoi s ke tu vi tri k
void myMemmove(char s[], int vt, int k); //Xoa k ky tu trong chuoi s, bat dau tu vi tri vt.
int myStrstr(char s[], char s1[]); //Tim chuoi s1 trong chuoi s, neu tim thay tra ve vi tri s1[0] trong chuoi s, khong tin thay tra ve -1
void Chuanhoa(char s[]);

int myStrlen(char s[], int k){
    int i = k;
    int len = 0;
    while (s[i] != '\0'){
        len ++;
        i++;
    }
    return len;
}

void myMemmove(char s[], int vt, int k){
    int len = 0;
    while (s[len] != '\0') len++;
    if (k >= 0 && k < len){
        for (int i = k; i < len; i++){
            s[i] = s[i + 1];
            len --;
        }
    }
}

int myStrstr(char s[], char s1[]){
    bool found = false;
    int lenS = 0, lenS1 = 0;

    while (s[lenS] != '\0') lenS++;
    while (s1[lenS1] != '\0') lenS1++;

    for (int i = 0; i <= lenS - lenS1; i++) {
        for (int j = 0; j < lenS1; j++) {
            if (s[i + j] != s1[j]) {
                found = false;
                break;
            }
        }
        if (found) return i;
    }
    return -1;
}

void Chuanhoa(char s[]){
    int len = 0;
    s[0] = toupper(s[0]);
    while (s[len] != '\0') len++;
    int i = 0;
    while (i < len){
        if (s[i] == ' ') s[i + 1] = toupper(s[i + 1]);
        else s[i + 1] = tolower(s[i + 1]);
        i++;

    }
}


int main()
{
	char s[MAX];
//	gets(s);	//Nhap chuoi s
    cin.getline(s,MAX);
	Chuanhoa(s);
	cout << s << endl;
	return 0;
}
