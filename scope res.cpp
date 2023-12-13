#include <iostream>
using namespace std;
struct StudentInfo{
    string Name;
    string ID;

    void Set_StudentInfo();
    void Print_StudentInfo();
};
void StudentInfo::Set_StudentInfo() {
    cout << "Enter student name: ";
    cout << Name;
    cout << "Enter Student ID: ";
    cout << ID;
}
void StudentInfo::Print_StudentInfo() {
    cout << "Student Name: " << Name << endl;
    cout << "Student ID: " << ID << endl;
}
int main() {
    StudentInfo s1;
    s1.Set_StudentInfo();
    s1.Print_StudentInfo();
}