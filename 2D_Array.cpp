#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int a {2}; // initializing varible through curly braces
    int b(2); // initializing variable through parethesis
    cout << a << " " << b << endl ;

    // int arr[4][3] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int arr[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    // int size = 2;
    // for(int i = 0 ; i < 3 ; i++){
    //     for(int j = 0 ; j < 4 ; j++){
    //         cin >> arr[i][j] ;
    //     }
    // }
    for (int a = 0 ; a < 4  ; a++){
        cout << '[';
        for (int b = 0 ; b < 3 ; b++){
            cout << arr[a][b] << " ";
        }
        cout << ']';
        cout << endl ;
    }

    //Go through ones from the below loop
    // for(int a = 0 ; a < 4 ; a++){
    //     cout << "[";
    //     for(int b = 0 ; b < 4 ; b++){
    //         cout << arr[a][b] << " ";
    //     }
    //     cout << "]";
    //     cout << endl;
    // }
    // the iterator is taking the next rows first column element as the last element of the current row in the above loop
}

