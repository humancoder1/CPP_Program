#include<bits/stdc++.h>
using namespace std;


int Solve(vector<int> array , int size){
    int total_sum = 0;
    sort(array.begin() , array.end());
    swap(array[1] , array[size-1]);
    for(int i = 0  ; i < size-1; i++){

        total_sum += (array[i]+array[i+1]);
    }
    return total_sum;
}

int main(){
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        vector<int> arr;
        int ele;
        for(int i = 0 ; i < N ; i++){
            cin >> ele;
            arr.push_back(ele);
        }
        cout << Solve(arr , N) << endl;
    }
    return 0;
    
}