class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        if(nums.size()==3){
            return (nums[0]+nums[1]+nums[2]);
        }
        sort(nums.begin(),nums.end());
        int ans;
        int min=INT_MAX;
        for(int i=0;i<nums.size();i++){
            int left=i+1;
            int right=nums.size()-1;
           while(left<right)
        {
            int sum = nums[i]+nums[left]+nums[right];
             int diff= abs(target-sum);
               if(diff==0) ans=sum;
            if(min>diff)
            {
                min=diff;
                ans=sum;
            }
               if(sum>target) right--;
                   else left++;
        } 
        }
        return ans;
    }
};
//-4 -1 1 2