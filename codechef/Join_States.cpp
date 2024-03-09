#include<bits/stdc++.h>
using namespace std;

int Solve(int arr[] , int N , int M){
    int count = 0 ;
    int sum = 0;
    for(int i = 0 ; i < N ; i++){
        if(arr[i] >= M){
            count++;
        }
        else if (sum >= M){
            count++;
        }
        else{
            sum += arr[i];
        }
    }
    return count ;
}

int main(){
    int test_case;
    cin >> test_case;
    while(test_case--){
        int N , M;
        cin >> N >> M;
        int arr[N];
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        cout <<Solve(arr , N , M) << endl;
    }
    return 0;
}