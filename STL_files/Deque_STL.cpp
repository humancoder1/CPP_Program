#include<iostream>
#include<deque>

using namespace std;

int main(){
    deque<int> deq1 = {1,2,3,4};
    deq1.push_back(1);
    deq1.push_front(3);


    cout << "Size ->" << deq1.size() << endl;
    for(int i = 0 ; i < deq1.size() ; i++){
        cout << deq1[i] << " ";
    }
    cout << endl;
    deq1.insert( deq1.begin()+3 , 7);
    deq1.pop_back();

    for(int i = 0 ; i < deq1.size() ; i++){
        cout << deq1[i] << " ";
    }
    cout << endl;

    deq1.pop_front();
        for(int i = 0 ; i < deq1.size() ; i++){
        cout << deq1[i] << " ";
    }
}