#include<bits/stdc++.h>
using namespace std;

// int Solution(int arr_A[] , int arr_B[] , int size){

// }

// Si = 1 want beer
// Si = 0 do not want beer
 
int main(){
    int test_case;
    cin >> test_case;
    while(test_case--){
        int N ;
        cin >> N ;
        string S ;
        cin >> S;
        bool ans = true;

        // cout << count_1 << endl;

        for(int i = 0 ; i < N ; i++){
            if(S[i] == '1' && i < N-1 && ans == true ){

                cout << "IDK" << endl;
            }
            else if(S[i] == '1' && i == N-1 && ans == true){
                cout << "YES" << endl;
            }
            else if(S[i] == '0'){
                ans = false;
                cout << "NO" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        } 
    }
    return 0;
}