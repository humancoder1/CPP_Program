#include<iostream>
using namespace std;
int main(){
    int num1;
    cout << "enter number";
    // cin >> num1;
    num1 = cin.get(); // here cin is treating the input number as string or character
    cout << num1; // so the output is the ascii value of given the input
}