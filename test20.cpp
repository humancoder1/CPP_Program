#include<bits/stdc++.h>
using namespace std;

int main(){
    int num_a , num_b , num_c;
    cin >> num_a >> num_b >> num_c;

    while(num_a != num_b){
        if(abs(num_a-num_b) < num_c){
            if(num_a < num_b){
                num_a += (abs(num_a - num_b))/2;
                num_b -= (abs(num_a - num_b))/2;
            }
        }

        else if(num_a < num_b){
                num_a += num_c;
                num_b -= num_c;
        }

        else if(num_a > num_b){
                num_a -= num_c;
                num_b += num_c;
        }
    }
    return 0;
}