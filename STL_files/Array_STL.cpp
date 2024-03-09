#include<iostream>
#include<array>
using namespace std;

int main(){
    array<int , 5> arr = {1,2,3,4,5};
    array<int , 5> arr2{{6,7,8,9,10}};
    // for(int i = 0 ; i < arr.size() ; i++){
    //     cin >> arr[i] ;
    // }

    for(int j = 0 ; j < arr2.size() ; j++){
        cout << arr2[j] <<" ";
    }
    cout << endl;
    cout <<"First element :" <<  arr.front() << endl;
    cout << "Last element :" << arr.back() << endl;

    cout << "Element at third index : " << arr.at(3) << endl;

    arr.swap(arr2);

    for(int j = 0 ; j < arr2.size() ; j++){
        cout << arr[j] <<" ";
    }
    cout << endl;

    array <int , 0 > arr3;

    cout << arr3.empty() << endl;

    cout << arr.size() << endl;

    arr.fill(5);

    cout << arr3.size() << endl;
    for(int j = 0 ; j < arr2.size() ; j++){
        cout << arr[j] <<" ";
    }
    cout << endl;
}