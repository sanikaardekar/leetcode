class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1==s2) return true;
       int left=0, right=s1.size()-1;
        while(s1[left]==s2[left]) left++;
        while(s1[right]==s2[right]) right--;
        
        swap(s1[right],s1[left]);
        if (s1==s2) return true;
        else return false;
    }
};