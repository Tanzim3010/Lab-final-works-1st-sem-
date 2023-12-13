#include <iostream>
using namespace std;
int main() {
    int a,b,sum=0;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Do you want to input more numbers?" << endl;
    string reply;
    cin >> reply;
    if(reply == "Y"|| reply =="y") {
    cout << "How many extra numbers?: ";
    int extra;
    cin >> extra;
    int size = extra+2;
    int *ptr = new int[size];
    cout << "Enter " << extra << " extra numbers: ";
    for(int i =2; i<size; i++) {
        cin >> ptr[i];
    }
    cout<<"All elements: ";
    for(int i=2; i<size; i++) {
        cout << ptr[i] << " ";
        sum = sum + ptr[i];
    }
    delete [] ptr;
    }
    else {
        sum = a+b;
    }
    cout << endl;
    cout << "Sum: "<<sum << endl;

}