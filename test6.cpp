//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // int check_Array(int arr[] , int size){
    //     int arr2[] ;
    //     for (int i = 0 ; i < size ; i++){
    //         arr2[i] = arr[size-(i+1)];
    //     }
    //     cout << arr2;
    //     if (arr2 == arr){
    //         return 1;
    //     }
    //     else{
    //         return 0;
    //     }
    // }
    bool IsPerfect(int a[],int n)
    {
        // Complete the function
        int count = 0 ;
        for(int j = 0 ; j < n ; j++){
            cout << a[j] <<endl;
        }
        for (int i = 0 ; i < n/2 ; i++){
            if (a[i] == a[n-(i+1)]){
                count += 1;
            }
        }
        if (count == (n/2)){
            return true;
        }
        else{
            return false;
        }
    }
};




//{ Driver Code Starts.
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        if(ob.IsPerfect(a,n))
            cout<<"PERFECT\n";
        else
            cout<<"NOT PERFECT\n";
        
    }
    
}
// } Driver Code Ends