#include<iostream>
#include<string>

using namespace std;
// string name (string str){
    // str.cbegint()

int isDivisible(string s){
    //complete the function here
    int set_bit_count = 0 ;
    if (s[s.size()-1] == '0'){
        return 0;
    }
    for(int i = 0 ; i != '\n' ; i++){
        if(s[i] == '1'){
            set_bit_count++;
        }
    }
    cout << set_bit_count << endl;
    if(!(set_bit_count & 1) ){
        return 1;
    }
    return 0;
}
int main(){
    string str = "1001";
    // length(str)
    int ans = isDivisible(str);
    cout << ans << endl;
    // cout << str[str.size() - 1] << endl;


}