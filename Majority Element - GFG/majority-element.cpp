//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int arr[], int size)
    {
        
        // your code here
        int v=0, can=-1, c;
        for(int i=0;i<size;i++)
        {
            if(v==0)
            {
                can=arr[i];
                v++;
            }
            else{
                if(can==arr[i])
                {
                    v++;
                }
                else{
                    v--;
                }
            }
            
        }
        for(int i=0;i<size;i++)
        {
            if(can==arr[i])
            {
                c++;
            }
        }
        if(c>size/2)
        return can;
        else return -1;
        
    }
};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}

// } Driver Code Ends