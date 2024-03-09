#include<bits/stdc++.h>
using namespace std;

string Solve(int arr[]  , int N){
    for(int i = 0 ; i < N ; i++){
        if(arr[i] <= 4) return "NO";
    }
    return "YES";
}

int main(){
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        int arr[N];
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        cout << Solve(arr,N) << endl;
    }
    return 0 ;
}