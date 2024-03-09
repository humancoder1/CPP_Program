#include<iostream>
using namespace std;
int search_ele(int arr[] , int size , int key){
    for(int i = 0 ; i < size ; i++ ){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}
int main(){
    int n , key_num;
    cout << "enter size of array:" << endl ;
    cin >> n;
    int num[1000];
    cout << "enter the element of array:" << endl;
    for(int i = 0 ; i < n ; i++){
        cin >> num[i];
    }
    cout << "enter the key:" ;
    cin >> key_num ;

    cout << search_ele(num , n , key_num) << endl;;
}