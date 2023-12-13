#include <iostream>
using namespace std;
void test(int num) {
   if(num>=0) {
    cout << num << " is a postive number" << endl;
    }
    else {
        cout << num << " is a negative number" << endl;
    }
}
int main() {
    test(10);
    test(-5);
}    
