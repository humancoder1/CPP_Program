#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int M = 1e9+7;

int main(){
    int test_case;
    cin >> test_case;
    while(test_case--){
        int N;
        cin >> N;
        if (!(N&1)) cout << (N/2) << " " << N << endl;
        else cout << (N/2 + 1) << " " << N << endl;
    }
    return 0;
}