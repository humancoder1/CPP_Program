#include<bits\stdc++.h>
using namespace std;

int main(){
    int test_Case;
    cin >> test_Case;
    while(test_Case--){
        int exp_A , imp_A , exp_B , imp_B;
        cin >> exp_A >> imp_A >> exp_B >> imp_B;
        int net_exp_A = exp_A - imp_A;
        int net_exp_B = exp_B - imp_B;
        if((net_exp_A+net_exp_B) < 0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        } 
    }
    return 0;
}