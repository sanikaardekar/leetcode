class Solution {
public:
   
    bool isMonotonic(vector<int>& nums) {
        int i;
        if(nums.size()<=1) return true;
       for(i=0;i<nums.size()-1;i++)
       {
           if(nums[i]<=nums[i+1])
               continue;
           else break;
       }
        if(i==nums.size()-1) return true;
        for(i=0;i<nums.size()-1;i++)
        {
            if(nums[i]>=nums[i+1]) continue;
            else break;
        }
            if(i==nums.size()-1) return true;
            return false;
    }
};