#include<bits/stdc++.h>
using namespace std;

class Student{
    int rno;
    char name[50];
    double fee;
    public:
    Student(){ // this is the constructor 
        cout << "Enter the roll_no" ;
        cin >> rno;
        cout << endl;
        cout << "enter the name" ;
        cin >> name;
        cout << endl;
        cout << "Enter the fee" ;
        cin >> fee;
        cout << endl;
    }

    void output(){
        cout << rno << "\t" << name << "\t" << fee << endl;
    }
};


int main(){
    Student s1;
    s1.output();
    return 0;
}