#include<iostream>
using namespace std;
void swap_Array(int arr[] , int n){
    for (int i = 0 ; i < n ; i+=2){
        if (i+1 < n){   // i < n-1 approach is not good reference should be iterating index i
            arr[i] = arr[i] ^ arr[i+1];
            arr[i+1] = arr[i] ^ arr[i+1];
            arr[i] = arr[i] ^ arr[i+1];
        }
    }
}
int main() {
    int size = 6;
    int num[] ={1,2,3,4,5,6};
    // for(int i = 0 ; i < size ; i += 2 ){
    //     if (i+1<size){
    //         arr[i] = arr[i] ^ arr[i+1];
    //         arr[i+1] = arr[i] ^ arr[i+1] ;
    //         arr[i] = arr[i] ^ arr [i+1];
    //     }
    // } 
    swap_Array(num , size);
    for(int j = 0 ; j < size ; j++){
        cout << num[j] << "\t";
    }
}