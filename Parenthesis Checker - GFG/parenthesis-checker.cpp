//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string s)
    {
        // Your code here
        stack<char> st;
        for(auto i=s.begin();i!=s.end();i++)
        {
            if(*i == '{' || *i=='(' || *i=='[')
            {
                st.push(*i);
            }
            else if(st.empty() || st.top() == '(' && *i != ')' || st.top() == '{' && *i != '}' || st.top() == '[' && *i != ']')
            {
                return false;
            }
            else{
                st.pop();
            }
        }
        return st.empty() ? true : false;
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends