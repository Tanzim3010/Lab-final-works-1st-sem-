#include <iostream>
using namespace std;
int main()
{
    string info1;
    string info2;
    char data[50];
    cout << "Enter name: ";
    getline(cin,info1);
    cout << "Enter Department name: ";
    getline(cin,info2);
    cout << "Enter id: ";
    cin.getline(data,11);
    char data2[50];
    cout << "Enter University name: ";
    cin.getline(data2,45);

    cout << endl;

    cout << "Name: " << info1 << endl;
    cout << "ID: " << data << endl;
    cout << "Department name: " << info2 << endl;
    cout << "University name: " << data2 << endl;
}
