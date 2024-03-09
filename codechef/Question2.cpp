#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_case;
    cin >> test_case;
    while(test_case--){
        int N ;
        cin >> N ;
        if(!(N&1)) {
            cout << N/2 << " " << N/2 << endl;
        }
        else if((N&1 && N >1)){
            cout << (N/2 + 1) << " " << N/2 << endl;
        }
        else if(N == 1){
            cout << 1 << " "  << 1 << endl;
        }

    }
    return 0;
}