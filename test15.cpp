#include<iostream>
using namespace std;
int main(){
    // int a = 10;
    // int b = a++ + ++a;
    // cout << b << endl;ṇ
    int num1 = 10 ;
    int bin_num = 0;
    while(num1){
        bin_num = (num1%2) + bin_num*10;
        num1 = num1/2; 
    }
    cout << bin_num << endl;
    return 0;
}