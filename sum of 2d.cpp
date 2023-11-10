#include<iostream>
using namespace std;
int main(){

    int arr1[4][4], arr2[4][4], sum[4][4];

    cout << "Enter the elements of 1st array : " << endl;
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
           cin >> arr1[i][j];
        }
    }

    cout << endl << "Enter the elements of 2nd array : " << endl;
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
           cin >> arr2[i][j];
        }
    }

    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
           sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    cout << endl << "Summation of 2 arrays : " << endl;
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
           cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}