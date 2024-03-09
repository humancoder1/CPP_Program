#include<bits/stdc++.h>
using namespace std;

int Solution(string Str){
    map<char , int > map1 ;
    map<char , int > map2;

    for(auto i : Str){
        map1[i] = map1[i] + 1;
    }

    for()

    for(int i = 0 ; i < 8 ; i++){
        if((Str[i] == 'A' || Str[i] == 'E' || Str[i] == 'I' || Str[i] == 'O' || Str[i] == 'U') && (i != 1 && i != 3 && i != 5 )){
            return 0;
        }
        else if((Str[i] != 'A' && Str[i] != 'E' && Str[i] != 'I' && Str[i] != 'O' && Str[i] != 'U') && (i == 1 || i == 3 || i == 5 )){
            return 0;
        }
    }
    return 1;
}

int main(){
    int test_case;
    cin >> test_case;
    while(test_case--){
        int N;
        cin >> N;
        string S;
        cin >> S;
        if(Solution(S)) cout << "YES" << endl;
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}