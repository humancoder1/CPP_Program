#include<bits\stdc++.h>
using namespace std;

void Insertion_sort(int arr[] , int size_n){
    for(int  i = 1 ; i < size_n ; i++){
        int ele = arr[i];
        int j = i-1;
        for( ; j >= 0 ; j--){
            if(ele < arr[j]){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = ele;
    }
}

int main(){
    int n ; 
    cin >> n;
    int arr[n];
    for(int index = 0 ; index < n ; index++){
        cin >> arr[index];
    }
    Insertion_sort(arr , n);
    for(int k = 0 ; k < n ; k++){
        cout << arr[k] << "";
    }

}