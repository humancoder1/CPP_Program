#include <iostream>
using namespace std;

int find_dup(int array[] , int size){
    int num = array[0];
    for(int i = 1 ; i < size ; i++){
        num = num ^ array[i];
    }
    return num;
}

int main() {
	// your code goes here
    int test_Case;
    cin >> test_Case;
    while(test_Case--){
        int n ;
        cin >> n ;
        int arr[n] ;
        for(int i = 0 ; i < n ; i++){
            cin >> arr[i] ;
        }
        cout << find_dup(arr, n) << endl ;
    }
	
	return 0;
}
