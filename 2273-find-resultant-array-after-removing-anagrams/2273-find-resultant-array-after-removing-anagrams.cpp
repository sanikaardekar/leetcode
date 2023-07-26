class Solution {
public:
    bool isana(string w1, string w2){
        sort(w1.begin(),w1.end());
        sort(w2.begin(),w2.end());
        if(w1==w2){
            return true;
        }
        return false;
    }
    vector<string> removeAnagrams(vector<string>& words) {
        int i=0;
        while(i<words.size())
        {
            if(i>0 && isana(words[i],words[i-1]))
            {
                words.erase(words.begin()+i);
            }
            else{
                i++;
            }
        }
        return words;
    }
};