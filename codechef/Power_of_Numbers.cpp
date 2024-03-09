#include<bits/stdc++.h>
using namespace std;
int MOD = 1e9+7;


int optimal_num_POWER(int n , int r){
    // base condition
    if(n == 0 ) return 0;
    if (r == 0){
        return 1;
    }

    if(r%2 == 0){
        long long ans = optimal_num_POWER(n , r/2);
        return ((ans%MOD)*(ans%MOD))%MOD;
    }
    else{
        long long ans = optimal_num_POWER(n , (r-1)/2);
        return ((ans%MOD)*(ans%MOD)*(n%MOD));
    }
}


int num_POWER(int n , int r){
    // base condition
    if(n == 0 ) return 0;
    if (r == 0){
        return 1;
    }

    // return (n% * num_POWER(n , r-1))% MOD;
    return ((n%MOD) * (num_POWER(n , r-1) % MOD))%MOD;
}

long long call_POWER(int n ,int r){
    if(r%2 == 0){
        long long ans = num_POWER(n , r/2);
        return ((ans%MOD)*(ans%MOD))%MOD;
    }
    else{
        long long ans = num_POWER(n , (r-1)/2);
        return ((ans%MOD)*(ans%MOD)*(n%MOD));
    }
}

int main(){
    int num  , power;
    cin >> num  >> power ;
    cout << optimal_num_POWER(num , power) << endl;
    return 0;
}