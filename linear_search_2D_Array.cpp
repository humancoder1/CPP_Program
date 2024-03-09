#include<iostream>
using namespace std;
int search_ele_2D(int array[][3] , int key , int row , int col){
    for (int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            if(key == array[i][j]){
                return 1;
            }
        }
    }
    return 0;
}
int main(){ 
    int target ;
    int arr[3][3];
    cin >> target;

    for(int row  = 0 ; row < 3 ; row++){
        for (int col = 0 ; col < 3 ; col++){
            cin >> arr[row][col];
        }
    }
    if (search_ele_2D(arr , target , 3 , 3)){
        cout << "element is present in the array";
    }
    else {
        cout << "element is not present in the array";
    }

}


