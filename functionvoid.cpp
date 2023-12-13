#include <iostream>
using namespace std;
void sum(int a, int b) {
    int sum = a+b;
    cout << "Sum: " << sum << endl;
}
void sub(int a, int b) {
    int sub = a-b;
    cout << "Sub: " << sub << endl;
}
void mul(int a, int b) {
    int mul = a*b;
    cout << "Multiplication: " << mul << endl;
}
void divi(int a, int b) {
    float divi = a/b;
    cout << "Division: " << divi << endl;
}
int main() {
      sum(10,15);
      sub(5,3);
      mul(5,5);
      divi(10,5);
}