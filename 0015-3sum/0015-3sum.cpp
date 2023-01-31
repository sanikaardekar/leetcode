class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        int len=nums.size();
        
        for(int i=0;i<nums.size();i++)
        {
            int left=i+1;
            int right =len-1;
            if(i>0 && nums[i]==nums[i-1]) continue; //1st duplicate
            while(left<right)
            {
            if(nums[i]+nums[left]+nums[right]==0)
            {
                res.push_back({nums[i],nums[left],nums[right]});      
            
            while(left<right && nums[left]==nums[left+1]) left++; //2nd dup
            while(left<right && nums[right]==nums[right-1]) right--; //3rd dup
            right--;
            left++;
            }
            
            else if(nums[i]+nums[left]+nums[right]<0) left++; 
            else right--;
            }
        }
        return res;
        
    }
};