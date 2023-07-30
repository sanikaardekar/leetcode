class Solution {
public:
    vector<int> divisibilityArray(string word, int m) {
        vector<int> ans; string st;
        long long modd=0;
        for(int i=0;i<word.length();i++)
        {
             //st=word.substr(0,i+1);
            // long long int temp=std::stoll(st);
            modd=(modd*10+word[i]-'0')%m;
            if(modd==0){
                ans.push_back(1);
            }
            else{
                ans.push_back(0);
            }
        }
        return ans;
    }
};