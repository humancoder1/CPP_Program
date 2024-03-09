#include<iostream>
using namespace std;
int main(){
    int amt = 1330;
    int rem ;
    while(amt != 0){
        // switch(amt){
        //     case :
        // }
        if (amt >= 100){
            cout << amt / 100 << " 100 notes" <<endl;
            amt = amt % 100;
        }
        else if ( amt >= 50 && amt < 100){
            cout << amt / 50 << " 50 notes" << endl;
            amt = amt % 50;
        }
        else if ( amt >= 20 && amt < 50){
            cout << amt / 20 << " 20 notes" << endl;
            amt = amt % 20;
        }
        else if (amt >= 1 && amt < 20){
            cout << amt /1 << " 1 coins" << endl;
            amt = amt % 1;
        }
    }
}