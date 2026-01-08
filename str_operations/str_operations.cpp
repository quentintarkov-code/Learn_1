#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;       
int main() {
    char str[80];
    char str2[80];
    strcpy(str, "Hello, ");
    strcpy(str2, "World!");
    cout << "strcopy example:" << endl;
    cout << "String 1: " << str << endl;
    cout << "String 2: " << str2 << endl;
    cout << "Before concatenation length of str1 " << strlen(str) << endl;
    strcat(str, str2);
    cout << "After concatenation: " << str << endl;
    cout << "After concatenation length of str1 " << strlen(str) << endl;
    cout << "But str2 " << str2 << endl;

}
