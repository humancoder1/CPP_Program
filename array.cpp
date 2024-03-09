#include <iostream>
using namespace std;
void print_Array(int arr[] ,int size_arr){
    for(int i = 0 ; i < size_arr ; i++){
        cout << arr[i] << " ";
    }
}
int main(){
    int arr1[10] = {}; // initializing array
    cout << "element at index 1 : " << arr1[1] << endl;
    cout << "elemnet at index 5 : " << arr1[5] << endl;
    cout << "element at index 15 : " << arr1[15] << endl;
    cout << "element at index 30 : " << arr1[30] << endl;
    cout << endl;
    // int arr[10] = {[ 0 . . . 9 ] = 4};
    // int num[5]={ [ 0 . . . 4 ] = 3 };    

    int arr2[5] = {2,3,4 ,5,6}; // initializing array
    cout << "element at index 2 : " << arr2[2] << endl; //accessing array 
    cout << endl;

    int arr3[10] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr3)/sizeof(int); // size of array
    cout << size << endl;
    print_Array(arr3 , size);
    // for(int i = 0 ; i < size ; i++ ){
    //     cout << arr3[i] << endl; // printing array
    // }
    cout << endl;

    int arr4[10] = {1,2,3,4}; // all the elements excepy first 4 are zero
    for(int j = 0 ; j < 10 ; j++){
        cout << arr4[j] << " ";
    }
    cout << endl;

    int arr5[10] = {0};
    for(int a = 0 ; a < 10 ; a++){ // initializing arr with zero(all elements will be zero
        cout << arr5[a] << " ";
    }
    cout << endl;


}

