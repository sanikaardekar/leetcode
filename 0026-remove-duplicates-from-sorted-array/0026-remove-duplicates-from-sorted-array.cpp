class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int max=INT_MIN;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>max)
            {
                max=nums[i];
                nums[count]=max;
                count++;
            }
        }
        return count;
        
    }
};