#include<iostream>
using namespace std;

int GCD_Euclidean(int divisor , int dividend){
    // TIME COMPLEXITY --> O(log(min(a,b)))
    // whenever division happening time complexity is in log

    if (divisor == 0){
        return dividend ;
    }
    int temp = divisor;
    divisor = dividend % divisor ;
    dividend = temp;
    return GCD_Euclidean(divisor , dividend);
    //or 
    // return GCD_Euclidean(dividend % divisor , divisor); 
}

int GCD_Euclidean_Iterative(int num1 , int num2){
    while(num1 > 0 && num2 > 0){
        if(num1 > num2){
            num1 = num1 % num2;
        }
        else {
            num2 = num2 % num1;
        }
    }
    if (num2 == 0) return num1;
    else return num2 ;
}

int main(){
    int num1 = 3 , num2 = 3 , num3 = 32;
    int ans;
    ans = GCD_Euclidean(num1,num2);
    cout << ans << endl;

    // int ans2 =GCD_Euclidean(num3 , ans);
    // cout << ans2 << endl;
    
    // int ans3 = GCD_Euclidean_Iterative(num1 , num2 );
    // cout << ans3<< endl;
    
    
    return 0;
}