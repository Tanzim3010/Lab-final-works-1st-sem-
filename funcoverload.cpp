#include <iostream>
using namespace std;
void sum(int a, int b) {
    int add = a+b;
    cout << "add: " << add << endl;
}
void sum(int a, int b, int c) {
    int add = a+b+c;
    cout << "2nd add: " << add << endl;
}
void sum(string a, char b){
    cout<<"String parameter function: "<<endl;
}     
int main() {
    sum(3,5);
    sum(10,5,3);
    sum("Hello",' T');
}