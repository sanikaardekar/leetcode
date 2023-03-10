//{ Driver Code Starts
// A C++ program to find if there is a zero sum
// subarray
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{
    public:
    //no cylcic/consecutive check
    //no diff/ target bcos there only 2 considered
    // set also no bcos 1 1 -2 gives 0
    // hashmap? --> can, just like set
    // 4 2 -3 1 6 --> 4 6 3 4
    //2 4 -1 6 3--> 2,6, 5, 11, 14
    //set --> set used for prefix sum so yes
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        //Your code here
        if(arr[0]==0) return true;
        if(n>=2 && arr[0]+arr[1]==0) return true;
        else{
        unordered_set<int> st; int sum;
        for(int i=0;i<n;i++)
        {
            sum=sum+arr[i];
            if(sum==0 || st.find(sum) != st.end()){ 
            return true;
            }
            st.insert(sum);
        }
        }
        return false;
    }
};

//{ Driver Code Starts.
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    Solution obj;
	    	if (obj.subArrayExists(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
	}
	return 0;
}
// } Driver Code Ends