class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if(nums.size()==1)
        {
            return;
        }
        int x1,x2; 
        for(int i=nums.size()-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            {
                x1=i;
                break;
            }
        }
        if(x1<0)
        {
            reverse(nums.begin(),nums.end());
        }
        else{
           
            for(int i=nums.size()-1;i>=0;i--)
            {
                if(nums[i]>nums[x1])
                {
                    x2=i;
                    break;
                }
            }
            swap(nums[x1],nums[x2]);
            sort(nums.begin()+x1+1,nums.end());
        }
    }
};
//very imp sum
// logic:
// 