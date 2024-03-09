#include<iostream>
using namespace std;
int main(){
    // int arr[] = {2,2,3,1,2,2,1,2,4,5,3,3,5,};
    int arr[] = {1,3,1,3};
    int temp = arr[0] ; 
    for (int i = 0 ; i < 4 ; i++){
        if (i+1 < 4){
            temp = temp ^ arr[i+1];
        }
    }
    cout << temp << endl;
}