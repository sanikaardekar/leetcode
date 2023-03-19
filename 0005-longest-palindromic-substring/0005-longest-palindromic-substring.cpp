class Solution {
public:
    //even--> 
//odd-->
    string longestPalindrome(string s) {
        int start=0, end=1;
        string ans="";
        for(int i=1;i<s.length();i++)
        {
            //even
            int low=i-1;
            int high=i;
            while(low>=0 && high<s.length() && s[low]==s[high]){
                if(high-low+1>end){//find max
                    end=high-low+1;
                    start=low;
                }
                low--;
                high++;
            }
            //odd
            low=i-1;
            high=i+1;
            while(low>=0 && high<s.length() && s[low]==s[high]){
                if(high-low+1>end){
                    end=high-low+1;
                    start=low;
                }
                low--;
                high++;
            }
        }
            for(int i=start;i<=start+end-1;i++)
            {
                ans=ans+s[i];
            }
            return ans;
        
    }
};