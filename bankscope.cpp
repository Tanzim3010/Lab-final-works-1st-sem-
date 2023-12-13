#include<iostream>
using namespace std;
struct Account{
    string AccNo;
    string AccName;
    double Balance;
void Set_AccInfo();
void Print_AccInfo();
double Deposit();
double Withdraw();
};
void Account::Set_AccInfo(){
    cout<<"Enter Account Number:"<<endl;
    cin>>AccNo;
    cout<<"Enter Account Holder Name:"<<endl;
    cin>>AccName;
    cout<<"Enter Current balance"<<endl;
    cin>>Balance;
}
void Account::Print_AccInfo(){
    cout<<"Account Number:"<<AccNo<<endl;
    cout<<"Holder Name:"<<AccName<<endl;
    cout<<"Balance:"<<Balance<<endl;
}
double Account::Deposit(){
    double amount;
    cout<<"Enter the amount you want to deposit."<<endl;
    cin>>amount;
    Balance=Balance+amount;
    cout<<"Final Balance after transaction: ";
return Balance;
}
double Account::Withdraw(){
    double amount;
    cout<<"Enter the amount you want to withdraw."<<endl;
    cin>>amount;
    if (amount<=Balance){
    Balance=Balance-amount;
    }
    else {
        cout<<"Insufficient Balance."<<endl;
    }
    cout<<"Final balance after transaction: ";
return Balance;
}
int main (){
    int x,y;
    Account A[3];
    for (int i=0; i < 3; i++) {
    A[i].Set_AccInfo();
    A[i].Print_AccInfo();
    cout<<"Do you want to Deposit? Press 1 if YES."<<endl;
    cin>>x;
    if (x==1){
        cout<<A[i].Deposit()<<endl;
    }
    else{
        A[i].Print_AccInfo();
    }
    cout<<"Do you want to Withdraw? Press 1 if YES."<<endl;
    cin>>y;
    if (y==1){
        cout<<A[i].Withdraw()<<endl;
    }
    else {
        A[i].Print_AccInfo();
    }
  }

}