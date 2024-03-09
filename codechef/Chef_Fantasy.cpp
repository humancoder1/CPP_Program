#include<bits/stdc++.h>
using namespace std;

int fact(int num){
    if (num == 1 || num == 0){
        return 1;
    }
    int factn = num * fact(num-1); 
    return factn;
}

int main(){
    int test_case ;
    cin >> test_case ;
    // cout << fact(3) << endl;
    while(test_case--){
        int N;
        cin >> N;
        int ans = fact(N)/fact(N-2);
        cout << ans << endl;
    }
}