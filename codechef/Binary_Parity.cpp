#include <bits/stdc++.h>
using namespace std;

int dectobin(int N){
    int sum = 0 ;
    while(N>0){
        sum += N&1;
        N = N>>1;
    }
    return sum ;
}

int main() {
	// your code goes here
    int T;
    cin >> T;
    while(T--){
        int N , M ;
        cin >> N ;
        int ans = dectobin(N) ;
        if(!(ans&1)){
            cout << "EVEN" << endl;
        }
        else{
            cout << "ODD" << endl;
        }
    }
    return 0;
}
