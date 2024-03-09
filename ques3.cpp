#include<iostream>
#include<vector>
using namespace std;

vector<int> distribute(int num){
    int y ;
    vector<int> arr;
    for(int i = 1 ; i < (num/2) ; i++){
        y = num - (2*i);
        arr.push_back(i);
        arr.push_back(i);
        arr.push_back(y);
        if(y%2 != 0){
            return arr;
        }
        if(i%2 !=0 ){
            return arr;
        }
    } 
}
int main(){
    int test_Case;
    cin >> test_Case;
    while (test_Case--){
        int num_choco;
        cin >> num_choco;

        vector<int> ans = distribute(num_choco);
        for(auto i:ans){
            cout << i << " " ;
        }
        cout << endl;
    }
    return  0;
    
}