#include<iostream>
#include<queue>

using namespace std;

int main(){
    queue<string> q1 ;

    q1.push("Hello");
    q1.push("Wolrd");
    q1.push("Hola");

    cout << "First/Top Element ->" << q1.front() << endl;
    q1.pop();

    cout << "First/Top Element ->" << q1.front() << endl;

    q1.emplace("out");
    q1.emplace("moshi-moshi"); // emplace() adds an element to the end of the queue

    while(!q1.empty()){
        cout << q1.front() << " " ;
        q1.pop();
    }
    return 0;
}