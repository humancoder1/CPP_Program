#include<bits/stdc++.h>
using namespace std;

int Solution(int arr_A[] , int arr_B[] , int size){
    unordered_map<int , int> map1;
    int sum = 0;
    for(int i = 0 ; i < size ; i++){
        map1[arr_A[i]] = max(map1[arr_A[i]] , arr_B[i]); 
    }
    for(auto j : map1){
        // cout << j.first << "->" << j.second << endl;
        sum += j.second;
    }
    return sum;
}

int main(){
    int test_case;
    cin >> test_case;
    while(test_case--){
        int N ;
        cin >> N ;
        int arr_A[N];
        int arr_B[N];
        for(int i = 0 ; i < N ; i++){
            cin >> arr_A[i];
        } 
        for(int j = 0 ; j < N ; j++){
            cin >> arr_B[j];
        }
        cout << Solution(arr_A , arr_B , N) << endl;
    }
}