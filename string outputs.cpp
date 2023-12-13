#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char s1[50]="Halloween";
    char s2[50]="Happy new year";
    cout << "Length of s2: "<<strlen(s2)<<endl;
    cout << "Length of s1: "<<strlen(s1)<<endl;
    cout << "Compare s1 & s2: "<<strncmp(s1,s2,2)<<endl;
    cout << "Concatenated result: "<<strncat(s2,s1,5)<<endl;
    cout << "Length of s2: " <<strlen(s2)<<endl;
    cout << "s1: "<< s1 << endl;
    cout << "Copy: " << strcpy(s1,s2)<<endl;
    cout << "Search in s1: "<<strchr(s1,'o') << endl;
    cout << "Search in s1: "<<strstr(s1,"ll")<<endl;
    cout << "Merged form: "<<strcat(s1,s2)<<endl;
    cout << "S2: "<<s2<<endl;
}