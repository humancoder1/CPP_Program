#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    if(N < 8){
        cout << "LESS" << endl;
    }
    else if(N == 8){
        cout << "PERFECT" << endl;
    }
    else{
        cout << "MORE" << endl; 
    }
    return 0 ;
}