#include<iostream>
using namespace std;
int main(){
    int num1 = 1;
    int num2 = 2;
    cout << "num1 is : " << num1 << endl ;
    cout << "num2 is : " << num2 << endl ;
    cout << endl ;
    
    num1 = num1 ^ num2 ;
    num2 = num1 ^ num2 ; 
    num1 = num1 ^ num2 ;

    cout << "num1 is : " << num1 << endl;  
    cout << "num2 is : " << num2 << endl;
}