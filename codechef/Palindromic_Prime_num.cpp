#include <bits/stdc++.h>
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
}

int check_Prime(int num){
    int count = 0;
    for(int i = 2 ; i < num ; i++){
        if (num % i == 0){
            return 0;
        }
    }
    return 1;
}
int count_Digit(int num){
    int digit_count = 0;
    while(num){
        num = num/10;
        digit_count++;
    }
    return digit_count;
}

int main() {
	int test_case;
    cin >> test_case;
    while(test_case--){
        int N;
        cin >> N;
        int n_count = 0;
        int even_Count = 0 , odd_count = 0 ;
        int ele = 2;
        while(n_count < N){
            if(check_Palin(ele) && check_Prime(ele)){
                n_count++;
                if(count_Digit(ele)%2 == 0){
                    even_Count++;
                }
                else{
                    odd_count++;
                }

            }
            ele++;
        }
        cout << even_Count << " " << odd_count << endl;
    }
	return 0;
}
