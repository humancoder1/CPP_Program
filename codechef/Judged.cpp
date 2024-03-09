#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_case ;
    cin >> test_case;
    while(test_case--){
        int R1 , R2 , R3 , R4 , R5;
        cin >> R1 >> R2 >> R3 >> R4 >> R5;
        
        if(R1+R2+R3+R4+R5 >= 4){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl; 
        }
    }
    return 0;
}