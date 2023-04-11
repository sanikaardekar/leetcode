//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    // code here
    vector<int> ans(2,-1);
    int i=0, j=n-1;
    for(int m=0;m<n;m++){
        if(arr[i]==x && ans[0]==-1){
            ans[0]=i;
           }
          if(arr[j]==x && ans[1]==-1){
            ans[1]=j;
           }
           i++;
           j--;
    }
    return ans;
}


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends