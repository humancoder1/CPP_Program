#include<bits/stdc++.h>
using namespace std;

int main(){
    int R1 , R2;
    cin >> R1 >> R2;

    int D1 , D2;
    cin >> D1 >> D2 ;

    if((R1+D1) > R2+D2){
        cout << "Dominater" << endl;
    }
    else {
        cout << "Everule" << endl;
    }
    return 0;
}