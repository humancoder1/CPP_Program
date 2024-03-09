#include<iostream>
using namespace std;

int sum_num(int num1){
    int sum = 0;
    int i = 1;
        while (i <= num1){
        sum += i;
        i++ ;
    }
    return sum ;
}

int sum_even(int num){
    int sum = 0;
    int i = 1;
    while(i <= num){
        if( i % 2 == 0){
            sum += i;
        }
        i++;
    }
    return sum;
}

void temp_conv(float num3){
    float i = 0;
    while (i <= num3){
        float temp = (i * (9/5)) + 32;
        cout << temp << endl;
        i++;
    }
}

int check_Prime(int num4){
    int i = 2;
    int count = 0;
    while(i < num4){
        if (num4%i == 0){
            count += 1;
        }
        i++;
    }
    if (count >= 1){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int n;
    cin >> n ;
    // while (i <= n){
    //     cout << i << endl;
    //     i++;
    // }
    // int ans = sum_even(n);
    // cout << ans;
    // temp_conv(n);
    int ans = check_Prime(n);
    ans == 0 ? cout << "Prime" : cout << "not prime";

}