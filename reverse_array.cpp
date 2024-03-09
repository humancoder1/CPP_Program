#include<iostream>
using namespace std;
void reverse_Array1(int arr1[] , int n1 ){
    int start = 0 ;
    int end = n1-1 ;
    while (start > end){
        swap(arr1[start] , arr1[end]) ;// swap function swaps two numbers
        start++ ;
        end-- ;
    }
    for (int i = 0 ; i < n1 ; i++){
        cout << arr1[i] << endl;
        // when array is of size 2 and more size value is passed
        //segmentation fault occurs when the program attempts to access the memory location for which it does not have permission
    }
}
void reverse_Array2(int arr2[] , int n2){
    int i = 0;
    while(i < (n2/2)){
        arr2[i] = arr2[i] ^ arr2[n2-(i+1)] ; 
        arr2[n2-(i+1)] = arr2[i] ^ arr2[n2-(i+1)] ;
        arr2[i] = arr2[i] ^ arr2[n2 - (i+1)] ;
        i++;
    }
    for(int j = 0 ; j < n2 ; j++){
        cout << arr2[j] << "\t" ;
    }
}
int main(){
    // int num [] = {1,2,3,4,5,6};
    int num [] = {1,2} ; 
    int size = 6 ;
    reverse_Array2(num , size);
    reverse_Array1(num , size);
    // for(int i = 0 ; i < (size/2) ; i++){
    //     num[i] = num[i] ^ num[size-(i+1)];
    //     num[size-(i+1)] = num[i] ^ num[size - (i+1)];
    //     num[i] = num[i] ^ num[size-(i+1)];
    // }
    // for(int j = 0 ; j < size ; j++){
    //     cout << num[j] << endl;
    // } 
}
