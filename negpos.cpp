#include <iostream>
using namespace std;
void NegPos(int arr[5]) {
    for(int i = 0; i<5; i++) {
        if(arr[i] >= 0) {
            cout << arr[i] << " is positive" << endl;
        }
        else { 
            cout << arr[i] << " is negative" << endl;
        }
    }
}
int main() {
    int arr[5];
    cout << "Enter array: ";
    for(int i=0; i < 5; i++) {
        cin >> arr[i];
    }
    NegPos(arr);
}