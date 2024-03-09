#include<iostream>
using namespace std;
int main(){
    char ch ;
    cout << "Enter character";
    cin >> ch;
    // cout << ch;
    if (ch >= 'a' && ch <= 'z'){
        cout << "lower" ;
    }
    else if (ch >= 'A' && ch <= 'Z'){
        cout << "upper";
    }
    else if (ch >= '0' && ch <= '9'){
        cout << "digit";
    }
}