#include<iostream>
#include<set>

using namespace std;

int main(){
    set<int> s1 ;

    s1.insert(2);  // complexity of inser() -> O(logn)
    s1.insert(3);
    s1.insert(3);
    s1.insert(5);
    s1.insert(9);
    s1.insert(1);
    s1.insert(5);

    for(int i : s1){
        cout << i << " ";
    }
    cout << endl;

    set<int> :: iterator it = s1.begin();
    s1.erase(it);

    for(int i : s1){
        cout << i << " ";
    }
    cout << endl;

    cout << "5 is present or not ->" << s1.count(5) << endl;
    
    set<int> :: iterator itr = s1.find(5);
    cout << "value at itr ->" << *itr << endl;
    
    for(auto iter = itr ; iter != s1.end() ; iter++){
        cout << *iter << " " ;
    }
    cout << endl;


    set<int> s2 ={7,7,8,9,9,6,10};
    for(auto iter1 = s2.begin() ; iter1 != s2.end() ; iter1++){
        cout << *iter1 << " ";
    }
    cout<<endl;


    set<int , greater<int>> s3; // set arranged in descending order
    s3.insert(6);
    s3.insert(8);
    s3.insert(4);
    s3.insert(1);
    s3.insert(15);
    s3.insert(0);

    cout<< "Size of ser s3 ->" << s3.size() << endl;
    for(auto iter2 = s3.begin() ; iter2 != s3.end() ; iter2++){
        cout << *iter2 << " ";
    }
    cout<<endl;
    

    return 0;

}