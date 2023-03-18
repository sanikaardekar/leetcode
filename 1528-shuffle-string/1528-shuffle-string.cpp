class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
         vector<pair<int,char>>res;
        for(int i=0;i<s.length();i++)
        {
            res.push_back(make_pair(indices[i],s[i]));
        }
        sort(res.begin(), res.end());
        string ans;
        for(int i=0;i<res.size();i++)
        {
            ans.push_back(res[i].second);
        }
        return ans;
    }
    
};