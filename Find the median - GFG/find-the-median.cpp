//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
	public:
		int find_median(vector<int> v)
		{
		    // Code here.
		    int median;
		    sort(v.begin(),v.end());
		    if(v.size()%2==0){//1331-->0123-->odd-->even
		        int mid=v.size()/2;
		        median = (v[mid]+v[mid-1])/2;
		    }
		    else{ //13431-->01234->even->odd
		        int mid=(v.size()-1)/2;
		        median=v[mid];
		    }
		    return median;
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(n);
    	for(int i = 0; i < n; i++)
    		cin>>v[i];
    	Solution ob;
    	int ans = ob.find_median(v);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends