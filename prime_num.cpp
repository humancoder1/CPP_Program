#include<iostream>
using namespace std;
int main(){
    int num;
    cout << "enter the number :" ;
    cin >> num ;
    int count = 0;
    for(int i = 2 ; i < num ; i++){
        if (num % i == 0){
            count++;
            break;
        }
    }
    if (count >= 1){
        cout << "not prime" << endl;
    }
    else{
        cout << "Prime" << endl;
    }
}