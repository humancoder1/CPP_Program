#include<bits/stdc++.h>
using namespace std;

void Solve(string S){
    map<char,pair<int,int>> map1;
    int max_val = 90;
    string ans = "";
    bool check = true;
    for(int i = 0 ; i < S.size() ;i++){
        map1[S[i]] = {S[i],i};
        if(map1[S[i]].second< i){
            max_val = max(max_val,map1[S[i]].first);
        }
    }
    cout << max_val << endl;
    // for(int j = 0 ; j < S.size() ;j++){
        // cout << j.first << "->" << j.second << endl; 
        // if(S[j] == max_val && check ){
            // check = false;
            // continue;
        // }
        // ans = ans + S[j];
    // }
    // return ans;
    for(auto j : map1){
        cout << j.first  <<"->"<< j.second.first<<"->" << j.second.second << endl;
    }
}

int main(){
    int test_case ;
    cin >> test_case;
    while(test_case--){
        int N;
        cin >> N;
        string S;
        cin >> S;
        // cout << Solve(S) << endl;
        Solve(S);
        // int temp_H = H;
        // int count_K = 0;

        // while(temp_H > 0 && count_K < K ){
        //     temp_H = temp_H - Y1;
        // }
        // min_hit = min(min_hit,count_K);
    }
    return 0;

}