#include<iostream>
using namespace std;
// int main(){
    /*int a;
    cin >> a;
    switch(a){
        case 11 :
            cout <<"number is 11" <<endl;
            break;
        case 12 :
            cout <<"number is 12" <<endl;
            // break;
        case 13 :
            cout <<"number is 13" << endl;
            // break;
        default :
            cout << "choice is something else" << endl;
            // break;
    }*/

    // nested switch case
    // int n = 1;
    // int ans = 2;
    // switch(n){
    //     case 1 :
    //         cout << "Option ONE" << endl;
    //         switch (ans){
    //             case 1 :
    //                 cout << "answer is " << ans << endl ;
    //                 break;
    //             case 2 :
    //                 cout << "answer is " << ans << endl;
    //                 break;
    //         }
    //         break;

    //     case 2 :
    //         cout << "Option Two" << endl;
    //         break;
    // }
    // int num = 1;
    // switch (num) {
    //     case 1 :
    //     cout << "value is one's" << endl;
    //     break;

    //     case 2 :
    //     cout << "value is two " << endl;
// }

// Infinite while loop
// int main(){
//     int num = 1;
//     while(true){
//         switch (num){
//             case 1:
//                 cout << "number is" << num <<endl ;
//                 break;
//                 // exit(num);
//             default:
//                 cout << "number is" << 0 << endl ; 
//         }
//         exit(1);
//     }
// }

int main(){
    int num = 1;
    switch (num){
        case 1 :
            cout << "number is " << num << endl;
            num++;
            break;
            // continue; // continue keyword cannot be used in switch case statement
        case 2 :
            cout << "number is " << num << endl;
    }
}