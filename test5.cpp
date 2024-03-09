//{ Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

class Solution {
public:
    int check_Palin(int num){
        int num2 = 0 , temp = num;
        int ans;
        while(temp != 0){
            num2 = (num2*10) + (temp%10);
            temp = temp/10;
        }
        if (num2 == num){
            ans = 1;
        }
        else{
            ans = 0;
        }
        return ans;
    }
    int PalinArray(int a[], int n)
    {
    	// code here
    	int count = 0;
    // 	int ans;
    	for (int i = 0 ; i < n ; i++){
    	    count += check_Palin(a[i]);
    	}
    	if (count == n){
    	        cout << 1;
    	}
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
// } Driver Code Ends