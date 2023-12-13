#include <iostream>
using namespace std;
void prime(int arr[5]) {
    cout << "Prime numbers in the array are: ";
    for(int i = 0; i<5; i++) {
        int num = arr[i];
        bool prime = true;

        if (num<=1) {
            prime = false;
        }
        else {
            for(int j =2; j*j <=num; j++) {
                if(num%j==0) {
                    prime = false;
                    break;
                }
            }
        }
        if(prime) {
            cout << num << " ";
        }
    }
    cout << endl;
}
int main() {
    int arr[5];
    cout << "Enter array: ";
    for(int i = 0; i<5; i++) {
         cin >> arr[i];
    }
    prime(arr);
}