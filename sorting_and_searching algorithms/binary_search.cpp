#include<bits\stdc++.h>
using namespace std;
int binary_Search(int array[] , int size_n , int key_num ){
    int start = 0 ;
    int end = size_n - 1;
    int mid ; 
    //int mid = (start + end )/2 ;  this method can exceed the range of int
    //so mid = start + ((end - start) / 2);

    while (start <= end){
        mid = start + ((end - start)/2);

        if (key_num == array[mid]){
            return mid;
        }
        else if (key_num < array[mid]){
            end = mid - 1;
        }
        else if (key_num > array[mid]){
            start = mid + 1;
        }
    }
    return -1;
    
}
int main() {
    // int size = 5 ;
    // int arr[5] = {3,5,9,13,27};
    // int key = 20;
    // int start = 0 ;
    // int end = size - 1;
    // int mid = (start+end)/2;
    // while (start <= end){
    //     if(key == arr[mid]){
    //         cout << mid << endl ;
    //         exit(0);
    //     }
    //     else if (key > arr[mid]){
    //         start = mid + 1;
    //     }
    //     else if (key < arr[mid]){
    //         end = mid - 1;
    //     }
    //     mid = (start+end)/2 ;
    // }
    // cout << -1 << endl;
    int size;
    int key;
    int *ptr = (int*) calloc(size , sizeof(int));
    cin >> size ;
    cin >> key;

    for(int i = 0 ; i < size ; i++){
        cin >> ptr[i];
    }
    int ans = binary_Search(ptr , size , key);
    cout << ans << endl;
    return 0 ;
}