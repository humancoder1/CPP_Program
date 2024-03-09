#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int set_bits(int number){
        if(number <= 2048){
            return (__builtin_popcount(number));
        }
        else{
            return ((number/2048) + __builtin_popcount(number%2048)) ;
        }
    }
};

int main(){
    int test_case;
    cin >> test_case;
    while(test_case--){
        int p;
        cin >> p;
        Solution obj1;
        cout << obj1.set_bits(p) << endl;
    }
    return 0;
}