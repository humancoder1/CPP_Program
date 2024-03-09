#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_Case;
    cin >>test_Case ;
    while(test_Case--){
        int insur_cost;
        cin >> insur_cost ;
        int commi = ((0.2) * insur_cost);
        int ans = 100/commi;
        if((ans*commi) >= 100){
            cout << ans << endl;
        }
        else{
            cout << ans+1 << endl;
        }
    }
    return 0;
}