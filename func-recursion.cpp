#include <iostream>
using namespace std;
int factorial(int num) {
    if(num==0 || num == 1) {
        return 1;
    }
    else {
        return num*factorial(num-1);
    }
}
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Factorial: " << factorial(number);
}