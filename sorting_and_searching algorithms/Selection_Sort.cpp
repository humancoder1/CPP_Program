// #include<iostream>
#include<bits\stdc++.h>
using namespace std;

vector<int> Selection_SORT(vector<int> array, int size){
    for(int i = 0  ;i < size-1 ; i++){
        for(int j = i+1 ; j < size ; j++){
            if (array[i] > array[j]){
                array[i] = array[i] ^ array[j];
                array[j] = array[i] ^ array[j];
                array[i] = array[i] ^ array[j];
            }
        }
    }
    return array;
}
void Selection_sort(int arry[] , int size){
    for (int i = 0 ; i < size ; i++){
        for(int j = i+1 ; j < size ; j++){
            if (arry[i] > arry[j]){
                arry[i] = arry[i] ^ arry[j];
                arry[j] = arry[i] ^ arry[j];
                arry[i] = arry[i] ^ arry[j];
            }
        }
    }
    for(int k = 0 ; k < size ; k++){
        cout << arry[k] << " ";
    }

}

int main(){
    int arr[] = {10 , 9 , 8 , 7 , 6 , 5 , 4 , 3 , 2 , 1};
    int n = 10;
    Selection_sort(arr , n);
    vector<int> arr2 = {10 , 9 , 8 , 7 , 6 , 5 , 4 , 3 , 2 , 1};
    vector<int> ans = Selection_SORT(arr2 , arr2.size());

    return 0;
}

