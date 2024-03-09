#include<bits/stdc++.h>
using namespace std;

int Solve(int H , int X , int Y1 , int Y2 , int K ){
    int min_hit = 0;
    if (H < X || H < Y1 ){
        // cout << 1 << endl;
        return 1;
    }

    if((H % X) == 0){
        min_hit = (H / X);
    }
    else if((H %  X) > 0){
        min_hit = (H / X) + 1;
    }

    if(H < Y1*K ) {
        if((H % Y1) == 0){
            min_hit = min(min_hit , (H / Y1) );
        }
        else if((H % Y1) > 0){
            min_hit = min(min_hit , ((H /Y1)+1));
        }
    }
    else {
        H = H-(Y1*K);
        if(H % Y2 == 0){
            min_hit = min(min_hit , ((H / Y2)+K));
        }
        else if((H % Y2) > 0){
            min_hit = min(min_hit , ((H / Y2)+K+1));
        }
    }
    return min_hit;    
}

int main(){
    int test_case ;
    cin >> test_case;
    while(test_case--){
        int H , X , Y1 , Y2 , K;
        cin >> H >> X >> Y1 >> Y2 >> K ;
        cout << Solve(H , X ,Y1 , Y2 , K) << endl;
        // int temp_H = H;
        // int count_K = 0;

        // while(temp_H > 0 && count_K < K ){
        //     temp_H = temp_H - Y1;
        // }
        // min_hit = min(min_hit,count_K);
    }
    return 0;

}