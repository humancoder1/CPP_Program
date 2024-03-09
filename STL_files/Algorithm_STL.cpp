#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

int main(){
    vector<int> v1 = {1,2,3,4,5,6,7,8,9,10};
    cout <<"element [4] is present : "<< binary_search(v1.begin() , v1.end() , 4) << endl;

    cout << "index:" << (lower_bound(v1.begin() , v1.end() , 4) - v1.begin()) << endl;

    cout << "index:" << (upper_bound(v1.begin() , v1.end() , 4) - v1.begin()) << endl;

    int num1 = 9 ;
    int num2 = 5 ;
    cout<< "max value -> "<< max(num1 , num2) << endl;

    cout<< "min value -> "<< min(num1 , num2) << endl;
    
    swap(num1 , num2);
    cout << "num1 -> " << num1 << endl;
    cout << "num2 -> " << num2 << endl;

    // vector<int> v2={1,2,3};
    sort(v1.begin() , v1.end() , greater<int>());
    for(auto iter = v1.begin() ; iter != v1.end() ; iter++){
        cout << *iter << " " ;
    }
    cout << endl;

    string str1 = "abcd";
    reverse(str1.begin() , str1.end());
    cout << str1 << endl;

    vector<int> v2 = {1,2,3,4,5,6,7,8,9,10};
    rotate(v2.begin() , v2.begin()+1 , v2.end());

    for(auto iter2 : v2){
        cout << iter2 << " " ;
    }
    cout << endl;


    return 0;

}