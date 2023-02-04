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
                if(target<nums[left] //4,5,6 --false
                   || target>nums[mid] 
                  ){
                    left = mid+1;  //0,1,2
                }
                else
                {
                    right = mid-1; //4,5,6
                }
            }
            else 
            {
                if(target>nums[right]  
                   || target<nums[mid]
                  ){
                    right = mid-1; //6,4,5
                }
                else 
                {
                    left = mid+1; //0,2,1
                }
            }
        }
        return -1;
    }
};