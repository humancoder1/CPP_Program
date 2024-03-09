#include<bits/stdc++.h>
using namespace std;

string Solution(char array[]){
    for(int i = 0 ; i < 4 ; i++){
        if(array[i] == 'W' && array[i+1] == 'W' && array[i+2] == 'W') {
            return "YES";
        }
    }
    return "NO";
}

int main(){
    int test_case;
    cin >> test_case;
    while(test_case--){
        char arr[6];
        for(int i = 0 ; i < 6 ; i++){
            cin >> arr[i];
        }
        cout << Solution(arr) << endl;
    }
    return 0;
}