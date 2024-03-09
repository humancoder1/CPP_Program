#include<bits/stdc++.h>
using namespace std;

int Solution(vector<int> arr , int size ){
    int num=0 , index;
    for(int j = 0 ; j < size ; j++){
        num = min(arr[j] , num);
    }
}

int main(){
    int test_Case;
    cin >> test_Case;
    while(test_Case--){
        int num_days , ele;
        vector<int> days_arr;
        for(int i = 0 ; i < num_days ; i++){
            cin >> ele ;
            days_arr.push_back(ele);
        }
        
    }
}