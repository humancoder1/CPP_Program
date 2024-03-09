#include <iostream>
#include <vector>
using namespace std;
vector<int> sub_Array(vector<int>arr, int n, long long s){
    vector<int> ans;
    long long sum_s = 0;
    int index_1 , index_2;
    int count = 0;
    for(int i = 0 ; i < n ; i++){
        sum_s = 0 ;
        for (int j = i ; j < n ; j++){
            sum_s += arr[j];
            // cout << j << " " << sum_s  << " ";
            if (sum_s == s){
                // cout << "OK";
                index_1 = i+1;
                index_2 = j+1;
                // cout << index_1  << " " << index_2 << endl;
                ans = {index_1 , index_2};
                return ans;
                cout << "hello";
                // break;
                
            }
        }
    //     cout << endl;
    //     if (count == 1 )
    //         return ans;
    }
    cout << "hello";
    ans = {-1};
    return ans;
}
int main(){
    vector<int> array_1 = {1,2,3,7,5};
    int n = 5;
    vector <int> ans_sum  = sub_Array(array_1,n,12); 
    for(int num = 0 ; num < ans_sum.size() ; num++){
        cout << ans_sum[num] << " ";
    }
    return 0;
}