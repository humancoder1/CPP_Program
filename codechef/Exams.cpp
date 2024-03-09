#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_case;
    cin >> test_case;
    while(test_case--){
        int X , Y , Z;
        cin >> X >> Y >> Z;
        int half = (X*Y)/2;
        if(Z > half) cout << "YES" << endl;
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}