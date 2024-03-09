#include<bits/stdc++.h>
using namespace std;

int Solve(string S){
    map<char,int> m1;

    if (S.size() <=3){
        return 0;
    }
    for(int i = 0 ; i < S.size() ; i++){
        m1[S[i]] += 1;
    }
    char ch ;
    int start = 0 , end = INT32_MAX;
    for(auto j : m1){
        if(m1[j.first] > 1){
            if(end > m1[j.first]){
                end = m1[j.first];
                ch = j.first;
            }
        }
    }
    end--;
    // cout << "end -> " << end << endl;

    int gap_count = INT32_MAX;
    int ele_count ;
    while(end < S.size()){
        ele_count = 0;
        for(int i = start ; i <= end ; i++){
            if(S[i] == ch){
                ele_count++;
            }
        }
        // cout << "m1[ch] -> " << m1[ch] << endl;
        gap_count = min(gap_count,abs(m1[ch]-ele_count));
        // cout << "gap_count -> " << gap_count << endl;
        start++;
        end++;
    }

    return gap_count;
}


int main(){
    int T;
    cin >> T;
    while(T--){
        string S;
        cin >> S;
        cout << Solve(S) << endl;
    }
    return 0;
}