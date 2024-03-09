#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack <string> st1 ;

    st1.push("Hello");
    st1.push("World");
    st1.push("Hola");

    cout << "Top Element ->" << st1.top() << endl;

    st1.pop();
    
    cout << "Top element ->" << st1.top() << endl;

    cout << "Is stack empty ->" << st1.empty() << endl;
    
    st1.pop();
    cout << "Top element ->" << st1.top() << endl;

    cout << "Is stack empty ->" << st1.empty() << endl;
    
    return 0;
}