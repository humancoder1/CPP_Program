#include<bits/stdc++.h>
using namespace std;

#define YES cout << "YES" << endl
#define NO cout << "NO" << endl

int Solve(int X , int Y){
    return Y/(X-1);
}

int main(){
    int test_case;
    cin >> test_case;
    while(test_case--){
        int X , Y;
        cin >> X >> Y;
        cout << Solve(X,Y) << endl;
    }
    return 0;
}