class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans=""; bool m=true;
        for(int i=0;i<strs[0].length();i++)//1st string onlys
        {
            char f=strs[0][i];
            for(int j=1;j<strs.size();j++)
            {
                if(strs[j].size()<i || f!=strs[j][i])
                {
                    m=false;
                    break;
                }
            }
            if(m==false){
                break;
            }
            else{
                ans.push_back(f);
            }
        }
        return ans;
    }
};