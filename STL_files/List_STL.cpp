#include<iostream>
#include<list>

using namespace std;

int main(){
    list<int> l1 ;

    l1.push_back(2);
    l1.push_front(1);
    l1.push_back(4);
    l1.push_front(3);

    for(int i : l1){
        cout << i << " ";
    }
    cout << endl;

    l1.erase(l1.begin()) ;
    for(int j : l1){
        cout << j << " ";
    }
    cout << endl;

    l1.pop_back();
    for(int i : l1){
        cout << i << " ";
    }

    cout << endl;

    list<int> l2(5 , 100);
    for(int k : l2){
        cout << k << " ";
    }
    cout << endl;

    l1.reverse();
    for(int i : l1){
        cout << i << " ";
    }
    cout << endl;

    l1.sort();
    
    for(int i : l1){
        cout << i << " ";
    }
}