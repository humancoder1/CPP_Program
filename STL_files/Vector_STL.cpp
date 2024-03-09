#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr ;
    cout << "Capacity -> " << arr.capacity() << endl;

    arr.push_back(1);
    cout << "Capacity -> " << arr.capacity() << endl;

    arr.push_back(2);

    cout << "Capacity -> " << arr.capacity() << endl;
    arr.push_back(3);
    cout << "Capacity -> " << arr.capacity() << endl;

    arr.push_back(4);
    cout << "Capacity -> " << arr.capacity() << endl;

    arr.push_back(5);
    cout << "Capacity -> " << arr.capacity() << endl;
    
    cout << "Size ->" << arr.size() << endl;
    for(int i = 0; i < arr.size() ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Element at index 3 : " << arr.at(3) << endl;

    cout << "Front / First element ->" << arr.front() << endl;

    cout << "Back / Last element ->" << arr.back() << endl;

    arr.pop_back();
    cout << "Size ->" << arr.size() << endl;
    for(int i = 0; i < arr.size() ; i++){
        cout << arr[i] << " ";
    }
    cout << endl << endl;

    cout << "Capacity -> " << arr.capacity() << endl;
    arr.clear();
    cout << "After clearing Vector arr" << endl;
    cout << "Capacity " << arr.capacity() << endl;
    cout << "size -> " << arr.size() << endl; 


    vector <int>  arr2{{1,2,3,4,5,6}};
    for(int i = 0 ; i < arr2.size() ; i++){
        cout << arr2[i] << " ";
    }
    cout << endl;
    arr2.push_back(7);
    cout << "Capacity -> " << arr2.capacity() << endl;
    return 0;
}