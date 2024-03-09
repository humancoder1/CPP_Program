#include<bits/stdc++.h>
using namespace std;

# define ll long long

int main(){
    int test_case;
    cin >> test_case;
    while(test_case--){
        ll n;
        cin >> n;
        ll a , x;
        map<ll , ll> map1;
        map1[1] = INT32_MAX;
        map1[2] = INT32_MIN;
        vector<int> arr;

        ll count = 0 ;

        for(ll i = 0 ; i < n ; i++){
            cin >> a >> x ;
            if(a == 3) arr.push_back(x);
            else if(a == 1){
                map1[a] = min(map1[a] , x);
            }
            else if(a == 2){
                map1[a] = max(map1[a] , x);
            }
        }
        // cout << map1[1] << endl;
        // cout << map1[2] << endl;
        for(ll j = map1[1] ; j <= map1[2] ; j++){
            if(find(arr.begin() , arr.end() , j) != arr.end()){
                count++;
            }
        }
        
        cout << count << endl;
        
    }
    return 0 ;
}