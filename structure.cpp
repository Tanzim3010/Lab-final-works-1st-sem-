#include <iostream>
using namespace std;
struct student{
    string name; //data members
    string id;
    float cg;
    int age;
};
int main() {
    student s1; // structure variable
    cout << "Enter student 1 name: ";
    getline(cin,s1.name);
    cout << "Enter id: ";
    cin>>s1.id;
    cout << "Enter cg: ";
    cin >> s1.cg;
    cout << "Enter age: ";
    cin >> s1.age;
    cin.ignore(); //ignores the getline issue

    student s2;
    cout << "Enter student 2 name: ";
    getline(cin,s2.name);
    cout << "Enter id: ";
    cin>>s2.id;
    cout << "Enter cg: ";
    cin >> s2.cg;
    cout << "Enter age: ";
    cin >> s2.age;
    cout << endl;
    
    cout <<"Student 1 info: " << endl;
    cout << "Enter student 1 name: "<<s1.name<<endl;
    cout << "Enter student 1 id: "<<s1.id<<endl;
    cout << "Enter student 1 cg: "<<s1.cg<<endl;
    cout << "Enter student 1 age: "<<s1.age<<endl;
    cout << endl;
    
    cout <<"Student 2 info: " << endl;
    cout << "Enter student 2 name: "<<s2.name<<endl;
    cout << "Enter student 2 id: "<<s2.id<<endl;
    cout << "Enter student 2 cg: "<<s2.cg<<endl;
    cout << "Enter student 2 age: "<<s2.age<<endl;

}