#include<iostream>
using namespace std;

double Binary_Seacrh_sqrt(int n , int pre){
    int start = 0 ;
    int end = n ;

    double ans = 0.0;
    while(start <= end){
    int mid = start + ((end - start)/2);
        if(mid*mid == n){
            ans = mid;
            return ans;
        }
        else if(mid*mid > n){
            end = mid -1 ;
        }

        else if (mid*mid < n){
            start = mid + 1;
        }
    }

    double incr = 0.1;
    for(int i = 0 ; i < pre ; i++){
        while(ans*ans < n){
            ans += incr;
        }
        ans -= incr; 
        incr /= 10;
    }
    return ans;
}

int main(){
    int num = 40;
    int decimal_places = 2;
    cout << Binary_Seacrh_sqrt(num , decimal_places) << endl;

    return 0;
}