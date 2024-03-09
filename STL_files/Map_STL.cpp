#include<iostream>
#include<map>

using namespace std;

int main(){
    map<string , int> map1;

    map1["Hello"] = 1; // here "Hello" is the [key] and 1 is the [value]
    map1["world"] = 2;
    map1["Hola"] = 3;
    

    // the map is sorted according to the keys
    // in the unordered map the elements are arranged randomly
    for(auto i : map1){
        cout <<"key -> " << i.first <<" ; " ;
        cout <<"value -> " << i.second << endl ;
    }
    cout << endl;

    map1.insert({"hi" , 4});
    map1.insert(pair<string , int>("hehe" , 5));

    for(auto i : map1){
        cout <<"key -> " << i.first <<" ; " ;
        cout <<"value -> " << i.second << endl ;
    }

    cout << "Is [Hello] present : " << map1.count("Hello") << endl;

    map1.erase("hi");
    for(auto i : map1){
        cout <<"key -> " << i.first <<" ; " ;
        cout <<"value -> " << i.second << endl ;
    }

    map<char , int> map2;
    int num = 0;
    for(char ch = '0' ; ch < '9' ; ch++){
        // map2.insert(pair<char,int>(ch,num));
        // map2.insert({ch , num});
        map2[ch] = num;
        num++;
    }
    
    for(auto i : map1){
        cout <<"key -> " << i.first <<" ; " ;
        cout <<"value -> " << i.second << endl ;
    }
    return 0;
}