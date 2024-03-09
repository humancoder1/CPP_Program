#include<bits/stdc++.h>
using namespace std;

int Solve(vector<int> array , int size){
    int total_room = 0;
    for(int i = 0  ; i < size ; i++){
        if(!(array[i]&1)){
            total_room += (array[i]/2);
        }
        else{
            total_room = total_room + (array[i]/2) + 1;
        }

    }
    return total_room;
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