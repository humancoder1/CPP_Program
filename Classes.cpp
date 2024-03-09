#include<bits/stdc++.h>
using namespace std;

class HERO {
private:

    char Name[100];
    int health;
    int level;

public:
    //getter method(function)
    int getter_Health(){
        return health;
    }

    //setter mehtod(function)
    void setter_Health(int value){
        if(value > 0){
            health = value;
        }
        else return;
    }

};

class Hello{
public:
    int value1;
    char letter;
};


int main(){

    HERO Ram; //creating object or instance of HERO class
    // only applicable when properties/attributes are public
    // Ram.health = 10;
    // Ram.Name[0] = 'R';
    // Ram.Name[1] = 'A';
    // Ram.Name[2] = 'M';

    // Ram.level = 1;

    Ram.setter_Health(20);
    // cout << "Name : " << Ram.Name[0] << Ram.Name[1] << Ram.Name[2] << endl;
    cout << "Health : " << Ram.getter_Health() << endl;
    // cout << "Level : " << Ram.level << endl;
    cout << "size : " << sizeof(Ram) << endl; 

    Ram.setter_Health(1);
    cout << "Health :" << Ram.getter_Health() << endl;

    Hello obj1;

    cout << "Size of obj1 :" << sizeof(obj1) << endl;
}