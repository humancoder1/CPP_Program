#include <bits/stdc++.h>
using namespace std;

// int Solution(int arr[] , int size){
//     stack<int> st1;
//     st1.push(arr[0]);
//     int count = 0 ;
//     // for(int i = 1 ; i < size ; i++){
//     //     if(st1.top() > arr[i]){
//     //         st1.push(arr[i]);
//     //         count++;
//     //     }
//     //     else{
//     //         st1.pop();
//     //     }
//     // }
//     int i = 1;
//     while(!st1.empty()){
//         if(st1.top() > arr[i] && i < size){
//             st1.push(arr[i]);
//             count++;
//         }
//         else{
//             st1.pop();
//         }
//         i++;
//     }
//     return count;
// }

// int Solution(int arr[] , int size){
//     int mini = arr[0], count = 0;
//     for (int i = 1; i < size; i++)
//     {
//         if (arr[i] < mini)
//             count++;
//         else
//             mini = arr[i];
//     }
//     return count;
// }

// int Solution(int arr[] , int size){
//     int count  = 0;
//     for(int i = 0 ; i < size-1 ; i++){
//         for(int j = i+1 ; j < size ; j++){
//             if(arr[i] > arr[j]) count++;
//             else break;
//         }
//     }
//     return count;
// }

int main() {
	// your code goes here
	int test_case;
	cin >> test_case ;
	while(test_case--){
        int N;
        cin >> N;
        int arr[N];
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        cout << Solution(arr , N) << endl;
	}
	return 0;
}