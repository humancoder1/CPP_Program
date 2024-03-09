#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_case;
    cin >> test_case;
    while(test_case--){
        float P , L ;
        cin >> P >> L;
        float rate = L/P;
        // cout << rate << endl;
        if(rate >= 0.75){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}