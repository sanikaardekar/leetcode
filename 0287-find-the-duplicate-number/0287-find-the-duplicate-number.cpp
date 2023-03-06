class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
            //12234
        //     int res;
        // for(int i=0;i<nums.size();i++)
        // {
        //     if(nums[i]==nums[i+1])
        //         res=nums[i];
        // }
        // return res;
        while(nums[0]!=nums[nums[0]])
            swap(nums[0],nums[nums[0]]);
        return nums[0];
    }
};