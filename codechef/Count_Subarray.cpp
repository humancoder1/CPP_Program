#include<bits/stdc++.h>
using namespace std;

vector<int> Solve(vector<int> P){
    vector<int> pre_arr(P.size()+1 , 0);
    int sum = 0 ;
    for(int i = 0 ; i < P.size() ; i++){
        sum += P[i];
        pre_arr[i+1] = sum;
    }
    vector<int> ans(P.size(),0);
    // for(int ele = 0 ; ele < P.size() ; ele++){
    //     cout << ans[ele] << " ";
    // }

    // for(auto i : pre_arr){
    //     cout << i << " ";
    // }
    for(int j = 0 ; j < pre_arr.size()-1 ; j++){
        for(int k = j+1 ; k < pre_arr.size() ; k++){
            if(pre_arr[k] - pre_arr[j] <= P.size()){
                ans[pre_arr[k] - pre_arr[j]-1]++;
            }
            else if(pre_arr[k] - pre_arr[j] > P.size()){
                break;
            }
        }
    }
    return ans;
}

int main(){
    int test_case;
    cin >> test_case;
    while(test_case--){
        int N ;
        cin >> N;
        vector<int> P;
        int ele;
        for(int i = 0 ; i < N ; i++){
            cin >> ele ;
            P.push_back(ele);
        }
        vector<int> ans =Solve(P);
        for(auto ans_ele : ans){
            cout << ans_ele << " ";
        }
        cout << endl;
    }
    return 0;
}