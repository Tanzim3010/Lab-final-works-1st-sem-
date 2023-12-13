#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char s1[50];
    char s2[50];
    cout << "Enter a string: ";
    cin >> s1;

    int len = strlen(s1);
    for(int i = 0; i<len; i++) {
        s2[i] = s1[len-i-1];
    }
    cout << "Reversed: " << s2 << endl;
    int x = strcmp(s1,s2);
    if(x==0) {
        cout << s1 << " is palindrome" << endl;
    }
    else {
        cout << s1 << " is not palindrome" << endl;
    }

}

