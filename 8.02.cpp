#include <iostream>
#include <string.h>
#include <cstdio>
using namespace std;
#define MAX 300

void ChenChuoiTaiVitriK(char s[], char s1[], int k);
void Chuanhoa(char s[]);
int myStrlen(char s[], int k);
bool myStrcat(char s[], char s1[], char s2[]);
void myStrcpy(char s[], int vt, char s1[], int k);
int myStrstr(char s[], char s1[]);

void ChenChuoiTaiVitriK(char s[], char s1[], int k) {
    int lenS = 0;
    while (s[lenS] != '\0') lenS++;

    int lenS1 = 0;
    while (s1[lenS1] != '\0') lenS1++;
    for (int i = lenS; i >= k; i--) {
        s[i + lenS1] = s[i];
    }

    for (int i = 0; i < lenS1; i++) {
        s[k + i] = s1[i];
    }
}

int myStrlen(char s[], int k) {
    int len = 0;
    int i = k;
    while (s[i] != '\0'){
        len++;
        i++;
    }
    return len;
}

void myStrcpy(char s1[], int vt, char s[], int k) {
    for (int i = 0; i < k; i++) {
        s1[i] = s[vt + i];
    }
    s1[k] = '\0';
}

void Chuanhoa(char s[]) {
    int len = 0;
    while (s[len] != '\0') len++;

    int i = 0;
    while (i < len) {
        if (s[i] == '.') {
            if (i > 0 && s[i - 1] == ' ') {
                for (int j = i - 1; j < len; j++) {
                    s[j] = s[j + 1];
                }
                len--;
                i--;
            }

            if (s[i + 1] != ' ') {
                ChenChuoiTaiVitriK(s, (char *)" ", i + 1);
                len++;
            }

            int j = i + 2;
            while (s[j] == ' ') {
                for (int k = j; k < len; k++) {
                    s[k] = s[k + 1];
                }
                len--;
            }
        }
        i++;
    }
}

bool myStrcat(char s[], char s1[], char s2[]) {
    int lenS1 = 0;
    while (s1[lenS1] != '\0') lenS1++;

    int lenS2 = 0;
    while (s2[lenS2] != '\0') lenS2++;

    if (lenS1 + lenS2 >= MAX) return false;

    int i = 0;
    while (s1[i] != '\0') {
        s[i] = s1[i];
        i++;
    }
    int j = 0;
    while (s2[j] != '\0') {
        s[i++] = s2[j++];
    }
    s[i] = '\0';
    return true;
}

int myStrstr(char s[], char s1[]) {
    int lenS = 0;
    while (s[lenS] != '\0') lenS++;

    int lenS1 = 0;
    while (s1[lenS1] != '\0') lenS1++;

    for (int i = 0; i <= lenS - lenS1; i++) {
        bool found = true;
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



int main()
{
	char s[MAX];

	fflush(stdin);
	cin.getline(s, MAX);

	char s1[MAX];
	myStrcpy(s1, 0, s, myStrlen(s, 0));
	Chuanhoa(s1);
	cout << s << endl << s1 << endl;
	return 0;
}
