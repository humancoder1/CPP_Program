#include<bits/stdc++.h>
using namespace std;



int main(){
    int test_case;
    cin >> test_case;
    while(test_case--){
        int k;
        cin >> k;
        int num = 0;
        for(int i = 0 ; i <= k ; ){
            if(num % 3 != 0){
                i++;
            }
            else if(num % 10 != 3){
                i++;
            }
            num++;
        }
        cout << num << endl;
    }
    return 0;
}