#include<iostream>
using namespace std;
void row_wise_sum(int array[][3] , int row  ,int col){
    int sum ;
    for(int i = 0 ; i < row ; i++){
        sum = 0;
        for(int j = 0 ; j < col ; j++){
            sum += array[i][j];
        }
        cout << sum << endl ;
    }
}

void largest_row_sum(int array[][3] , int row , int col){
    int sum , max_sum = 0 , row_num;
    for (int i = 0 ; i < row ; i++){
        sum = 0;
        for (int j = 0 ; j < col ; j++){
            sum += array[i][j];
        }
        if(sum > max_sum){
            max_sum = sum;
            row_num = i;
        }
    }
    cout << max_sum << " of row " << row_num ; 
}
int main(){
    int arr[3][3];
    for(int a = 0 ; a < 3 ; a++){
        for(int b = 0 ; b < 3 ; b++){
            cin >> arr[a][b];
        }
    }
    // row_wise_sum(arr , 3 , 3 );
    largest_row_sum(arr , 3 , 3);
    return 0;
}