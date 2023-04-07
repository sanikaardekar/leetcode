class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int count=0;
        vector<int> chFreq(26, 0);
        
        for(auto ch : chars) chFreq[ch - 'a']++;
        
    
        
        
        for(auto str : words){
            
            bool flag = true;
            
            vector<int> copyFreq(26, 0);
            
            for(auto ch : str) {
                if(++copyFreq[ch - 'a'] > chFreq[ch - 'a']){
                    flag = false;
                    break;
                }
            }
     
            if(flag) count += str.size();
        }
        
       
        return count;
    }
};