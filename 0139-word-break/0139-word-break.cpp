class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> ws(wordDict.begin(), wordDict.end());
        vector<bool> dp(s.size()+1,0);
        
        dp[0]=1;//base case
        for(int i=0;i<s.size();i++)
        {
            if(!dp[i]) continue; //if 0
            for(int j=i+1;j<=s.size();j++)
            {
                if(ws.count(s.substr(i,j-i))){
                    dp[j]=1;
                }
            }
        }
        return dp[s.size()];
    }
};