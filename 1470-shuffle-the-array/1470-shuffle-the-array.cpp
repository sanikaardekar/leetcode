class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>ans(2*n);
        int i=0;
        for(int j=0;j<nums.size() && i<n;j+=2){
        
            ans[j]=nums[i];
            i++;
        }
        i=n;
        for(int j=1;j<nums.size() && i<nums.size();j+=2){
            ans[j]=nums[i];
            i++;
        }
        return ans;
    }
};