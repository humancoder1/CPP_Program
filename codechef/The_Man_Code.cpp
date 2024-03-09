#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        if(N==1){
            cout << 1 << " " << 1 << endl;
        }
        if(N%2 == 0){
            cout << N/2 << " ";
        }
        else {
            cout << (N/2 + 1) << " ";
        }
        if(N%3 == 0){
            cout << N/3 << endl;
        }
        else {
            cout << (N/3 + 1) << endl;
        }
    }
    return 0;
}