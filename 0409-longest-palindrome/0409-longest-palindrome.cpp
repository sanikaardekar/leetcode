class Solution {
public:
    //all even added
    //odd-1
// +1
    int longestPalindrome(string s) {
        bool odd=false;
        unordered_map<char, int> m;
        for(auto i: s) m[i]++;
        int res=0;
        for(auto i:m){
        if(i.second%2 ==0 ) res=res+i.second;
        else{
            odd=true;
            res=res+i.second-1;
        }
        }
        if(odd){
            res++;
        }
        return res;
        
    }
};