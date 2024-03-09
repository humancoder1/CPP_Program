#include <iostream>
using namespace std;
int main(){
    int num1 , num2;
    char oper ;
    // cout << num1 << endl;
    // cout << num2 << endl;
    char ans = 'y';
    while(ans == 'y'){
        cout << "enter number:";
        cin >> num1 >> num2 ; 
        cin >> oper;
        switch (oper){
            case '1' : 
                cout << num1+num2 << endl;
                break;
            case '2' : 
                cout << num1-num2 << endl;
                break;
            case '3' :
                cout << num1*num2 << endl;
                break;
            case '4' :
                cout << num1/num2 << endl;
                break;
            case '5' :
                cout << num1 % num2 << endl;
                break;
        }
        cout << "want to continue calculation(y/n)";
        cin >> ans;
    }
}