#include<bits\stdc++.h>
using namespace std;

int String_Length(char str[]){
    int count = 0 ;
    for(int i = 0 ; str[i] != '\0' ; i++ ){
        count++;
    }
    return count ;
}
int String_Length(string str2){
    int count = 0 ;
    for(int i = 0 ; str2[i] != '\0' ; i++ ){
        count++;
    }
    return count ;
}

int main(){
    char name[20] ;
    cin >> name ;
    cout << name << endl;
    char str1[] = "Geeks";

    for(int i = 0 ; str1[i] != '\0' ; i++ ){
        cout << str1[i] << " " ;
    }
    cout << endl;
    cout << "Size : " <<String_Length(name) << endl;

    string str2 = "CodeChef";

    cout << "Size : " << String_Length(str2) << endl; 


    return 0 ;
} 