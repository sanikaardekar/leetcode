//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    // code here
	    long long int res=arr[0]; long long int maxi=arr[0], mini=arr[0];
	    for(int i=1;i<n;i++)
	    {
	        if(arr[i]<0){
	            swap(maxi, mini);
	        }
	        maxi=max((long long int)arr[i],arr[i]*maxi);
	        mini=min((long long int)arr[i],mini*arr[i]);
	        res=max(res, maxi);
	        
	    }
	    return res;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends