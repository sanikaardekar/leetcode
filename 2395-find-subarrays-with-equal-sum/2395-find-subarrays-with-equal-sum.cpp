class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        int i=1; int sum=0;
        unordered_map<int,bool> mp;
        while(i<nums.size())
        {
            sum=nums[i]+nums[i-1];
            if(mp[sum]) return true;
            else mp[sum] = true;
                i++;
        }
        return false;
    }
};