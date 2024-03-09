#include <bits/stdc++.h>
using namespace std;

int Solve(int N , int arr[]){
    int max_w = 0;
    int leg_count = 0 ;
    sort(arr , arr+N);

    // for(int i = N-1 ; i >= 0 ; i--){
    //     cout << arr[i] << " " ;
    // }
    // cout << endl;
    for(int j = N-1 ; j >= 0 ; j--){
        // cout << leg_count << endl;
        // if((leg_count+1)*arr[j] > max_w){
        //     max_w = (leg_count+1)*arr[j];
        //     leg_count++;
        // }
        max_w = max((leg_count+1)*arr[j]  , max_w);
        leg_count++;
    }
    return max_w;
    // return 0;

}

int main() {
	// your code goes here
    int T;
    cin >> T;
    while(T--){
        int  N  ;
        cin >> N ;
        int arr[N];
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        cout << Solve(N , arr) << endl;
        // int ans = dectobin(N) ;
        // if(!(ans&1)){
        //     cout << "EVEN" << endl;
        // }
        // else{
        //     cout << "ODD" << endl;
        // }
    }
    return 0;
}
