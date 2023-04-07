class Solution {
public:
    //we 
    int countCharacters(vector<string>& words, string chars) {
        int count=0;
        vector<int> chf(26,0);
        for(auto i:chars) chf[i-'a']++;
        
        for(auto i:words){
            bool flag=true;
            vector<int> wsf(26,0);
            for(auto ii:i){
                if(++wsf[ii-'a']>chf[ii-'a']){
                    flag=false;
                    break;
                }
            }
            if(flag) count=count+i.size();
        }
        
       
        return count;
    }
};