#include<bits/stdc++.h>
using namespace std;

void Solve(int N , int A[] , int M , int B[]){
    int max_num = 0;
    for(int i = 0 ; i < M ; i++){
        if(B[i] < N){
            max_num = max(max_num,B[i]);
        }
    }
    sort((A+N-max_num), A+N);
}

int main(){
    int test_case;
    cin >> test_case;
    while(test_case--){
        int N , M;
        cin >> N >> M;
        int A[N] , B[M];
        for(int i = 0 ; i < N ; i++){
            cin >> A[i];
        }
        for(int j = 0 ; j < M ; j++){
            cin >> B[j];
        }
        Solve(N , A , M , B);
        for(int j  = 0 ; j < N ; j++){
            cout << A[j] << " ";
        }
        cout << endl;
    }
    return 0;
}