#include<iostream>
using namespace std;
int main(){
    int num;
    cin >> num;
    if(num % 2 == 0 && num % 3 == 0){
        cout << num <<" is even and divisible by 3"  << endl; 
    }
    else if (num % 2 == 0){
        cout << num << " is even only" <<endl ;
    }
    else if (num % 3 == 0){
        cout << num << " is only divisible by 3" << endl;
    }
    else{
        cout << num << " is neither even nor divisible by 3" << endl;
    }
    return 0 ;
}