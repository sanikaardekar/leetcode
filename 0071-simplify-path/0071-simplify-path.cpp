class Solution {
public:
    string simplifyPath(string path) {
        stack<string> ans;
        string res;
        for(int i=0;i<path.size();i++)
        {
            if(path[i]=='/')
                continue; // here we ignoring not adding to the stack
            string temp;
            while(i<path.size() && path[i]!='/')
            {
                temp = temp+path[i];
                i++;
            }
            if(temp==".")
                continue; //ignoring
            else if(temp=="..")
            {
                if(!ans.empty())
                    ans.pop();
            }
            else 
                ans.push(temp);       
        }
        while(!ans.empty())
        {
            res='/'+ans.top()+res;
            ans.pop();
        }
        if(res.size()==0)
            res='/';
        return res;
    }
};