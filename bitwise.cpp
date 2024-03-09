#include <iostream>
using namespace std;
int main(){
    int a = 5;
    int b = 7;
    cout << "Bitwise AND :" << (a & b) << endl;
    cout << "Bitwise OR :" << (a|b) << endl; 
    cout << "Bitwise XOR :" << (a ^ b) << endl; 
    cout << "Bitwise NOT :" <<(~2) << endl;
    cout << "Bitwise left shift :" << (5<<1) << endl;
    cout << "Bitwise left shift :" << (5<<2) << endl;
    cout << "Bitwise right shift :" << (5>>1) << endl;
    cout << "Bitwise right shift :" << (5>>2) << endl;


}