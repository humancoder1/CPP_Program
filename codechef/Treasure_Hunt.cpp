#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_case;
    cin >> test_case;
    while(test_case--){
        int num_x , num_y , num_k;
        cin >> num_x >> num_y >> num_k;
        if(num_x >= num_y){
            cout << num_x << endl;
        }
        else if(num_y > num_x && num_x+num_k >= num_y){
            cout << num_y << endl;
        }

        else if(num_y > num_x && num_x+num_k < num_y){
            int ans = num_x + num_k;
            cout << ans + (num_y-ans) *2 << endl;
        }

    }
    return 0;
}