#include<iostream>
using namespace std;
int power(int num , int powr){
    int ans = 1;
    for (int i = 0 ; i < powr ; i++){
        ans = ans * num;
    }
    return ans;
}

void even_odd(int num1){
    if( num1 & 1){
        cout << num1 << " is odd" << endl ;
    }
    else{
        cout << num1 << " is even" << endl;
    }
}
// even odd with bool return type
bool is_Even(int num2){
    if (num2 & 1){ // for odd number
        return 0; // odd
    }
    else { // for even number 
        return 1 ; // even
    }
}

int factl(int num3){
    int i = 1 ;
    int ans = num3;
    while (i < num3 ){
        ans = ans * i;
        i++;
    }
    return ans;
}
int comb(int num4 , int num5){
    int n1 = factl(num4);
    int n2 = factl(num5);
    int n3 = factl(num4 - num5);
    return (n1/(n2*n3)) ;
}

void print_count(int num6){
    for(int i = 1 ; i <= num6 ; i++){
        cout << i << endl;
    }
}

void is_Prime(int num7){
    int count = 0;
    for(int i = 2 ; i < num7 ; i++){
        if (num7 % i == 0){
            count++ ;
            break;
        }
    }
    if (count == 1){
        cout << num7 <<" is not Prime" << endl;
    }
    else{
        cout << num7 << " is Prime" << endl ;
    }
}

int airth_pro(int num8){
    return ((3*num8) + 7);
}

int count_bit(int num9){
    int count = 0 ;
    while (num9 != 0){
        if (num9 & 1 == 1){
            count++;
        }
        num9 = num9 >> 1;
    }
    return count;
}

int set_bit(int num10 , int num11){
    return (count_bit(num10) + count_bit(num11));
}
int fibonaci(int num12){
    int n1 = 0;
    int n2 = 1;
    int n3 ;
    for(int i = 1; i < num12 ; i++ ){
        n3 = n1 + n2 ;
        n2 = n1 ;
        n1 = n3;
    }
    return n3;
}
int main(){
    // cout << power(5 , 5) << endl;
    // even_odd(6);
    // cout << is_Even(6) << endl;
    // cout << factl(4) << endl ;
    // cout << comb(5, 4) << endl ;
    // is_Prime(5);
    // cout << airth_pro(3) << endl;
    // cout << count_bit(3) << endl;
    // cout << set_bit(2,3) << endl;
    cout << fibonaci(5) << endl;
}