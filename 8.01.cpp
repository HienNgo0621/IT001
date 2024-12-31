#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

int main (){
    char str[MAX];
    bool legitStr = true;
    cin.getline(str, MAX);
    int i = 0;
    while (str[i] != '\0'){
        if (isdigit(str[i])){
            legitStr = false;
            break;
        }
        i++;
    }
    if (legitStr == true) cout << str;
    else cout << "CHUOI KHONG HOP LE.";
    return 0;
}
