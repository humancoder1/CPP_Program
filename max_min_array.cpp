#include <iostream>
using namespace std;
void max_min1(int arr1[] ,int size1){
    int num1 = arr1[0];
    int num2 = arr1[0];
    for(int i = 0 ; i < 9 ; i++){
        if(num1 < arr1[i]){
            num1 = arr1[i];
        }
        if(num2 > arr1[i]){
            num2 = arr1[i];
        }
    }
    cout << num1 << endl;
    cout << num2 << endl;
}

void max_min2(int arr2[] , int size2){
    int max_num = INT32_MIN;
    int min_num =INT32_MAX;

    for(int i = 0 ; i < size2 ; i++){
        if(arr2[i] > max_num){
            max_num = arr2[i];
        }
        if(arr2[i] < min_num){
            min_num = arr2[i];
        }
    }
    cout << "Maximum element in array is : "<< max_num <<endl;
    cout << "Minimum element in array is : "<< min_num <<endl;
}

void max_min3(int arr3[] , int size3){
    int max_num = 0 ;
    int min_num = 0 ;
    for(int i = 0 ; i < size3 ; i++){
        max_num = max(max_num , arr3[i] );
        min_num = min(min_num , arr3[i]) ; 
    }  

    cout << max_num << endl;
    cout << min_num << endl;
}

int main(){
    // bool var1 = 10;
    // bool var2;
    // cout << var1 << endl;
    // cout << var2 << endl; // output is 64
    int num[] = {2,4,1,7,32,6,3,5,22};
    max_min1(num , 9);
    max_min2(num , 9);
    
}