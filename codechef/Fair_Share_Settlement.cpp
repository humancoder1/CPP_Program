#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_case ;
    cin >> test_case;
    while (test_case--)
    {
        int N , K ;
        cin >> N >> K;
        cout << N - (K*(floor(N/(K+1)))) << endl;
    }
    return 0;
    
}