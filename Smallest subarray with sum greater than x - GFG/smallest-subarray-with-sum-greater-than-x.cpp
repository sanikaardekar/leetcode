//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:

    int smallestSubWithSum(int arr[], int n, int x)
    {
        // count pe min max
        //
        // Your code goes here  
        int count;
        
        int sum; int max = INT_MAX;
        for(int i=0;i<n;i++)
        {
            sum=arr[i];
            if(sum>x){
                return 1;
            }
            count=1;
            int j=i+1;
            while(j<n){
            sum=sum+arr[j];
            count++;
            if(sum>x){
                max = min(max,count);
                break;
            }
            j++;
            }
        }
        return max;
    }
};

//{ Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution obj;
		cout<<obj.smallestSubWithSum(a,n,x)<<endl;
	}
	return 0;
}
// } Driver Code Ends