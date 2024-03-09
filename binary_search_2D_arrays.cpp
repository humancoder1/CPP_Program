#include<bits/stdc++.h>
using namespace std;
vector<int> binary_search_Matrix(vector<vector<int>> matrix , int key){ // matrix --> 2D ARRAY
    int row_num = matrix.size(); // number of rows in the matrix
    int col_num = matrix[0].size(); // number of columns in the matrix
    // cout << row_num << " " <<col_num<<endl;

    int start = 0 ;
    int end = row_num * col_num - 1;

    while(start <= end){
        int mid = (start + end)/2;
        int elem =  matrix[mid/col_num][mid%col_num];
        // cout << elem << endl;
        if(elem == key){
            // ans.push_back((mid / col_num));
            // ans.push_back((mid % col_num));
            return {(mid / col_num),(mid % col_num)};
        }
        else if (elem <  key){
            start = mid+1;
        }
        else if(elem > key){
            end = mid - 1 ;
        }
    }
    return {-1};
}
int main(){
    int target = 8;
    // int arr[4][4] = {{1,2,3,4} , {5,6,7,8} , {9,10,11,12} , {13,14,15,16}};
    vector<vector<int>> array = {{1,2,3},{4,5,6} , {7,8,9}};
    vector<int> answer = binary_search_Matrix(array , target);
    cout << answer[0] << " " << answer[1] << endl;


    // int s_row = 0 , s_col = 0;
    // int e_row = 3 , e_col = 3;
    // int mid_row = (s_row + e_row)/2;
    // int mid_col = (s_col + e_col)/2;
    
    // while(s_row <= e_row || s_col <=e_col ){
    //     if(arr[mid_row][mid_col] == key ){
    //         cout << true << endl;
    //         cout << mid_row << "," << mid_col << endl;
    //         break;
    //     }
    //     else if (arr[mid_row][mid_col] > key ){
    //         if(mid_col == 0 && mid_row > 0){
    //             e_col = 3;
    //             e_row = mid_row-1;
    //         }
    //         else{
    //             e_col = mid_col - 1 ;
    //             e_row = mid_row ; 
    //         }
    //     }
    //     else if (arr[mid_row][mid_col] < key){
    //         if(mid_col == 3){
    //             s_col = 0;
    //             s_row = mid_row+1;
    //         }
    //         else{
    //             s_col = mid_col + 1;
    //             s_row = mid_row ;
    //         }
    //     }
    //     mid_row = (s_row + e_row)/2;
    //     mid_col = (s_col + e_col)/2;
    // }
    return 0;
}