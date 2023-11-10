#include <iostream>
using namespace std;
int main() {
   int arr[2][5];
   cout << "Enter the elements of the array: " << endl;
   for(int i = 0; i<2;i++){
      for(int j=0;j<5;j++) {
         cin >> arr[i][j];
      }
   }
   cout << "Inputted elements: " << endl;
   for(int i = 0; i<2; i++) {
      for(int j = 0; j<5; j++) {
         cout << arr[i][j] << " ";
      }
      cout << endl;
   }
   for(int i = 0; i<2; i++) {
      for(int j = 0; j<5; j++) {

         if(arr[i][j] >=0) {
            cout << arr[i][j] << " is positive" << endl;
         }
         else {
            cout << arr[i][j] << " is negative" << endl;
         }
      }
   }

}
