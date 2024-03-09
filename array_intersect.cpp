#include<iostream>
using namespace std;  
void arr_intersect(int arr1[] , int arr2[], int size){
    for (int i = 0 ; i < size ; i++){
        for(int j = 0 ; j < size ; j++){
            if (arr1[i] == arr2[j]){
                cout << arr1[i] << endl;
                break;
            }
        }
    }
}
int main(){
    int num1[] = {1,2,3,4,5,6};
    int num2[] = {4,2,8,1,9,7};
    arr_intersect(num1 , num2 ,6);

}