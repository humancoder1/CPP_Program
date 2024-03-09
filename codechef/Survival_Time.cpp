#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_case;
    cin >> test_case;
    while(test_case--){
        int num_Bun , num_X , num_D;
        cin >> num_Bun >> num_X >> num_D;
        cout << (num_Bun/(5*num_X))+num_D << endl;
    }
    return 0;
}