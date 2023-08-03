class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        bool ans; 
        if(arr.size()<=2) return false;
        int max=INT_MIN, ind;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>max)
            {
                max=arr[i];
                ind=i;
            }
        }
        if(ind==0 || ind==arr.size()-1) return false;
        
        for(int i=0;i<ind;i++)
        {
            if(arr[i]>=arr[i+1]) return false;
        }
        for(int j=ind+1;j<arr.size();j++)
        {
            if(arr[j]>=arr[j-1]) return false;
        }
        return true;
    }
};