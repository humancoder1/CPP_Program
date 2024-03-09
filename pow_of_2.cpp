#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int num ;
    cin >> num ;
    int num2 = num;
    // cout << 3/2 << endl;
    // while(num != 0){
        // 
    // }
    int count = 0 ;
    while( num2 % 2 == 0){
        num2 = num2 / 2;
        count++;
    }
    // cout << count <<endl;
    if (pow(2,count) == num ){
        cout << num <<" can be expressed in power of 2" << endl;
    }
}