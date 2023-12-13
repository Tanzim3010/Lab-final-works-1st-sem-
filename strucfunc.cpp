#include<iostream>
using namespace std;
struct StudentInfo
{
    string Name;
    string ID;
    float cgpa;
    int age;
 
void Set_StudentInfo()
{ 
    cout<<"Enter student Name:";
    getline(cin,Name);
    cout<<"Enter student ID:";
    cin>>ID;
    cout<<"Enter student cgpa:";
    cin>>cgpa;
    cout<<"Enter student Age:";
    cin>>age;
    cin.ignore();
}
void Print_StudentInfo()
{
    cout<<"Student Name:"<<Name<<endl;
    cout<<"Student ID:"<<ID<<endl;
    cout<<"Student Cgpa:"<<cgpa<<endl;
    cout<<"Student Age:"<<age<<endl;
}
void Check_StudentInfo() 
{
   if(cgpa<2.50) {
    cout << "Probation student." << endl;
   }
   else if(cgpa>=2.5&&cgpa<=4.00) {
   cout << "Regular student" << endl;
   }
}
} ;
int main()
{
  StudentInfo S1;
  
  S1.Set_StudentInfo();
  StudentInfo S2;
  S2.Set_StudentInfo();
  
  cout<<"Student Information"<<endl;
  S1.Print_StudentInfo();
  S1.Check_StudentInfo();
  S2.Print_StudentInfo();
  S2.Check_StudentInfo();
}