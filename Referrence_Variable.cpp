#include<bits/stdc++.h>
using namespace std;


int& funct(int n){
    int a = n;
    int& ans = a;
    return ans;
}

int main(){
    int i = 5 ; 
    int & j = i;

    int n;
    cin >> n;

    cout << i << endl;
    cout << j << endl;

    j++;
    cout << i << endl;
    cout << j << endl;


    funct(10);
    return 0;
}