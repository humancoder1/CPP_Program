#include<bits\stdc++.h>
using namespace std;

int Sieve_Algo(int n){
    int count_prime = 0;
    vector<int> prime(n+1 , true);
    prime[0] = prime[1] = false;

    for(int i = 2 ; i < n ; i++){ // for strictly less than n  i<n ; for less than and equal to n i <= n
        if (prime[i] == true){
            count_prime++;

            for(int j = i*2 ; j < n ; j+=i){ // for strictly less than n  i<n ; for less than and equal to n i <= n
                prime[j] = false;
            }
        }
    }
    return count_prime;
}
int main(){
    int num ; 
    cin >> num ;
    int ans = Sieve_Algo(num);
    cout << ans << endl;

    return 0 ;
}