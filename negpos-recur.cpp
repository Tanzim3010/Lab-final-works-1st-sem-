#include <iostream>
using namespace std;
void EvenOdd(int num) {
    if(num%2==0) {
        cout << "The number is even." << endl;
    }
    else {
        cout << "The number is odd." << endl;
    }
}
void PosNeg(int num) {
    if(num>=0) {
        cout << "The number is a positive number." << endl;
        EvenOdd(num);
    }
    else {
        cout << "The number is a negative number" << endl;
    }
}
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    PosNeg(number);
}