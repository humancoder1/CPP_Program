// #include<iostream>
// using namespace std ;
// int main(){
//     // int  a = 3 , b = 0;
//     // int ans = a + ((b - a)/2);
//     // cout << ans;
//     // int row = 4 , col = 4 ;
//     // int arr[4][4] = {{1,2,3,4} , {5,6,7,8} , {9,10,11,12} , {13,14,15,16}};
//     // cout << arr[3][3] << endl;
//     // return 0 ;
// }
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	// your code goes here
	int test_Case;
	cin >> test_Case;
	while(test_Case){
	    int num_low_sticks;
	    int num_per_plate;
	    int num_amt;
	    int num_of_plates;
	    cin >> num_low_sticks >> num_per_plate >> num_amt;
	    int quotient = ((num_amt/30)+num_low_sticks)/num_per_plate;
	    int remain = ((num_amt/30)+num_low_sticks)%num_per_plate;
	    if(quotient>remain){
	        num_of_plates = quotient+remain;
	    }
	    else{
	        num_of_plates = remain-quotient;
	    }
	    cout << num_of_plates << endl;
	    test_Case--;
	}
	
	return 0;
}

