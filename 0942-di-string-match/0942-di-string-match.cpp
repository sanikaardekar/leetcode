class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector <int> res;
        int j=0; int k=s.size();
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='I') { res.push_back(j); j++;}
            else{ res.push_back(k); k--;}
        }
        res.push_back(k);
        return res;
    }
};