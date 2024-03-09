#include<bits\stdc++.h>
using namespace std;

void Print_Array(int arr[] , int size_n){
    for(int index = 0  ; index < size_n ; index++){
        cout << arr[index] << " " ;
    }
}

void Bubble_Sort(int array[]  , int size){
    for(int i = 0 ; i < size ; i++){
        for(int j = 0 ; j  < size-(i+1) ; j++){
            if (array[j] > array[j+1]){
                array[j] = array[j] ^ array[j+1];
                array[j+1] = array[j] ^ array[j+1];
                array[j] = array[j] ^ array[j+1];
            }
        }
    }
    Print_Array(array , size);

}
vector<int> Bubble_SORT(vector<int> array , int size_num){
    for(int i = 0 ; i < size_num ; i++){
        for(int j = 0 ; j < size_num-(i+1) ; j++){
            if(array[j] > array[j+1]){
                swap(array[j] , array[j+1]);
            }
        }
    }
    return array;
}

vector<int> optimize_Bubble_SORT(vector<int> array, int size_num){
    int swaps_count = 0 ;
    for(int i = 0 ; i < size_num ; i++){
        bool swaps = false;
        for(int j = 0 ; j < size_num-(i+1) ;j++ ){
            if (array[j] > array[j+1]){
                swap(array[j] , array[j+1]);
                swaps_count++;
                swaps = true;
            }
        }
        if(swaps == false){
            break;
        }
    }
    return {swaps_count};
}

int main(){
    int n = 10 ;
    int arr1[] = {10, 9, 8 , 7 ,6 ,5 ,4 ,3 ,2 ,1};
    Bubble_Sort(arr1 ,n);
    cout << endl;
    // vector<int> arr2 = {10, 9, 8 , 7 , 2,  3, 5, 2, 9 , 4 , 6 , 5 , 4 , 3 , 2 , 1};
    // vector<int> sorted_array = Bubble_SORT(arr2 , arr2.size());
    // vector<int> arr2 = {1,2,3,4,5,6,7,8,9,10};
    vector<int> arr2 = {8, 22, 7, 9, 31, 5, 13};
    vector<int> sorted_array = optimize_Bubble_SORT(arr2 , arr2.size());
    for (int k = 0; k < sorted_array.size(); k++)
    {
        cout << sorted_array[k] << " " ;
    }

    return 0 ;
     
}

