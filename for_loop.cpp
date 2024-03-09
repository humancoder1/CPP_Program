#include<iostream>
using namespace std;
int main(){
    // for (int i = 0 ; i <= 5 ; i--){
    //     cout << i << " ";
    //     i++;
    // }

//     for (int a = 0 , b = 1 ; (a <= 1  && b <= 3) ; a++ ,b++){
//         cout << a << " " << b << endl;
//     }

    // for (int a = 0 , b = 1 ; (a <= 1  || b <= 3) ; a++ ,b++){
//         cout << a << " " << b << endl;
//     }
    int j = 1;
    for (;;){
        cout << j << endl;
        j++; 
        if (j>10){
            break;
        }
    }
}