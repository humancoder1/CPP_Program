#include<iostream>
using namespace std;
int check_Palin(int num){
    // int num = 121;
    int temp = num;
    int num2 = 0;
    int count = 0;
    while (temp != 0){
        num2 = (num2*10) + temp%10;
        temp = temp/10;
    }
    if (num == num2){
        return 1;
    }
    else{
        return 0;
    }
    // cout << num2;
}
int main(){
    int count = 0;
    int numbers[10] ;
    cout << "Enter number";
    for(int i = 0 ; i < 5 ; i++){
        cin >> numbers[i];
        count += check_Palin(numbers[i]);
    }
    if (count == 5){
        cout<< "Palindrome";
    }
    else{
        cout<< "Not Palindrome";
    }
}

