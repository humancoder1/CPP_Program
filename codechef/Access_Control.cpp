#include<bits/stdc++.h>
using namespace std;

string Solution(string Str1 ,int X){
    // map<char ,int> map1;
    int swipes = 0;
    for(int i = 0 ; i < Str1.size() ; i++){
        if(Str1[i] == '0') swipes--;
        else swipes = X;
        if(swipes < 0) return "NO";
    }
    return "YES";
}

int main(){
    int test_case;
    cin >> test_case;
    while(test_case--){
        int N , X;
        cin >> N >> X;
        string S;
        cin >> S;
        cout << Solution(S , X) << endl;
    }
    return 0;
}