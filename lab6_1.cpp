#include<iostream>
using namespace std;




int main(){
    int num,even=0,odd=0;
     while( num != 0){
     cout << "Enter an integer: ";
     cin >> num;
       if(num%2 == 0){
        even++;
        }else{
        odd++;
     }
     }
      cout << "#Even numbers = "<<even-1<< endl;
      cout << "#Odd numbers = "<<odd<< endl;
    return 0;
}