#include <iostream>
using namespace std;
int main(){
    int size;
    int num[20] ;
    int sum = 0;
    cout << "enter the size of array:" << endl;
    cin >> size;
    for(int i = 0 ; i < size ; i++){
        cin >> num[i];
        sum += num[i];
    }
    cout << sum << endl;
}