#include<iostream>
#include<queue>

using namespace std;

int main(){
    //max heap->
    priority_queue<int> max_Que;

    max_Que.push(2);
    max_Que.push(1); 
    max_Que.push(3); 
    max_Que.push(26); 
    max_Que.push(20); 

    cout << max_Que.size() << endl << endl;
    int size = max_Que.size();
    for(int i = 0 ; i < size ; i++ ){
        cout << max_Que.top() << " " << endl;
        max_Que.pop(); 
        cout << "Size ->"<< max_Que.size() << endl;
    }
    cout << endl;

    cout << "Khaali hai kya bhai ?? -> " << max_Que.empty() << endl;

    priority_queue<int , vector<int> , greater<int>> min_Que;

    min_Que.push(2);
    min_Que.push(5); 
    min_Que.push(4); 
    min_Que.push(10); 
    min_Que.push(8); 
    
    cout << "Fisrst Element / Top Element of min_heap ->" << min_Que.top() << endl;

    while (!min_Que.empty()){
        cout << min_Que.top() << " " ;
        min_Que.pop();
    }
    cout << endl;

    cout << "Khaali hai kya ?? -> " << min_Que.empty() << endl;
    return 0;
}