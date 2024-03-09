#include<iostream>
using namespace std;

int main(){
    int test_Case;
    cin >> test_Case;
    while(test_Case--){
        int len_num;
        cin >> len_num;
        string bin_Str;
        cin >> bin_Str;

        for(int i = 0 ; i < bin_Str.size()-2 ;i++){
            if(bin_Str[i] == '1'){
                for(int j = i ; j < bin_Str.size() ; j++){
                    bin_Str[j] = '0';
                }
            }
        }
        cout << bin_Str << endl;
    }
    return 0;
}