#include<bits/stdc++.h>
using namespace std;

int Solve(int arr[] , int N , int K){
    int min_waste = INT32_MAX;
    int count = 0;
    for(int i = 0 ; i < N ; i++){
        if(K > arr[i]){
            count++;
        }
        else{
            min_waste = min(min_waste,(arr[i]%K));
        }
    }
    if(count == N ) return -1;
    return min_waste;

}

int main(){
    int test_case ;
    cin >> test_case;
    while(test_case--){
        int N , K;
        cin >> N >> K;
        int arr[N];
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        cout << Solve(arr , N , K) << endl;
    }
    return 0;
}