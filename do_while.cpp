#include<iostream>
using namespace std;

void sol1(){
    int num1 ;
    int sum = 0 ;
    cin >> num1 ;
    do{
        sum += num1;
        cin >> num1 ;
    }while(num1 >= 0);
    cout << sum ;
}

void sol2(){
    char choice ;
    do {
        cout << "1:- Addition" << endl ;
        cout << "2:- Subtraction" << endl ;
        cout << "3:- Division" << endl ;
        cout << "4:- Multiplicaton" << endl ;
        cout << "Q:- Quit" << endl ;
        cout << "enter your choice :";
        cin >> choice;
        int num1 , num2;
        cout << "enter the numbers :";
        cin >> num1 >> num2; 
        if(choice == '1'){
            cout << (num1 + num2) <<endl ;
        }
        else if(choice == '2'){
            cout << (num1 - num2) << endl ;
        }
        else if(choice == '3'){
            cout << (num1 / num2) << endl ;
        }
        else if(choice == '4'){
            cout << (num1 * num2) << endl ;
        }
    }while (choice != 'Q');
    
}

int main(){
    // int n; 
    // cin >> n ;
    // int i = 1;
    // do
    // {
    //     /* code */
    //     cout << i << " \t " ;
    //     i++;
    // } 
    // while (i < n);
    
    // int num ;
    // do{
    //     cout << "enter the number:";
    //     cin >> num ;
    //     cout << num << endl;
    // }while(num <= 5 &&  num >= 1);
    // cout << "loop complete";

    // sol1();
    sol2();
}