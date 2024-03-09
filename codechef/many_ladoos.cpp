#include <iostream>
using namespace std;

long long num_Ladoos(long long left , long long right){

    long long num = left - 1 ;

    long long sum1 = (num*((num+1)/2))*(num*((num+1)/2));
    long long sum2 = (right*((right+1)/2))*(right*((right+1)/2));

    long long net_sum = sum2 ;
    return net_sum % 1000000007;
}

int main() {
	// your code goes here

    int test_Case;
    cin >> test_Case;
    while(test_Case--){
        long long  L , R;
        cin >> L >> R ;
        cout << num_Ladoos(L,R) << endl;
    }

	return 0;
}