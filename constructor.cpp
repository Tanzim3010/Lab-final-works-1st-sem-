#include <iostream>
using namespace std;
  class A {
    int a;
    int b;

    public:
    A(int x,int y) {
        a=x; b=y;
        cout << "contructor called" << endl;
        cout << "value of a: " << a++ << endl;
        b++;
    }
    void Method_A() {
        a=b--;
        --b;
    }
    ~A() {
        cout << "destructor called" << endl;
        cout << "Value of a: " << ++a << endl;
        cout << "Value of b: "<<b++<<endl;
    }
  };
int main() {
    A a1(5,10);
    A a2(2,4);
    a2.Method_A();
}