#include<bits/stdc++.h>
using namespace std;

#define ULL unsigned long long
#define LLD long double

ULL Solve(ULL N , ULL M , ULL X0 , ULL Y0 , ULL L){
    // cout << "for N -> " << (ceil(N/L)) << " " << "for M -> " << (ceil(M/L)) << endl;
    // ULL ans = (ceil(static_cast<double>(N) / L)* ceil(static_cast<double>(M) / L));
    // cout << (round(div1)) << endl;
    // return ans;
    return 0;
}

int main(){
    int T;
    cin >> T;
    while(T--){
        ULL N , M , X0, Y0 , L;
        cin >> N >> M >> X0 >> Y0 >> L;


        cout << Solve(N , M , X0 , Y0 , L) << endl;
    }
    return 0 ;
}