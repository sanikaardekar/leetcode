class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left=0;
        int right=nums.size()-1;
        while(left<=right)
        {
            int mid = (left+right)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            if(nums[left]<=nums[mid])
            {
                if(target<nums[left]
                   || target>nums[mid]
                  ){
                    left = mid+1;  //
                }
                else
                {
                    right = mid-1; //5
                }
            }
            else 
            {
                if(target>nums[right] 
                   || target<nums[mid]
                  ){
                    right = mid-1; //6
                }
                else 
                {
                    left = mid+1; //0
                }
            }
        }
        return -1;
    }
};