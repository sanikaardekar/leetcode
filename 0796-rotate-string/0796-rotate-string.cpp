class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length()) return false;
        if(s==goal) return true;
        for(int i=0;i<s.length();i++)
        {
            string temp = goal+goal;
            if(temp.find(s)<=goal.length()){
                return true;
            }
        }
        return false;
    }
};