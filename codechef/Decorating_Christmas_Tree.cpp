#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int M = 1e9+7;
class Solution{
public:
    string Solve(int N ,int X ,int Y){
        if(X>N && X%N == 0){
            return "YES";
        }
        else if(X>=N && (Y%(N-(X%N)))==0){
            return "YES";
        }
        else{
            return "NO";
        }
    }
};

// 6 > 5
// 5-1 = 4

int main(){
    int test_case;
    cin >> test_case;
    while(test_case--){
        int N , X , Y;
        cin >> N >> X >> Y;
        Solution obj1;
        cout << obj1.Solve(N,X,Y) << endl;
    }
    return 0;
}