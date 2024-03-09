#include<iostream>
using namespace std;
int add(int num1 , int num2){
    return (num1 + num2);
}
float add(float num3 , float num4 , int num5){
    return (num3+num4);
}

int main(){
    int ans1 = add(1,2);
    float ans2 = add(1.5 , 2.0 , 1);
    cout << ans1 << endl;
    cout << ans2 << endl;
    return 0 ;
}