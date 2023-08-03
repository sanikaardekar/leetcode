class Solution {
public:
    int findMaxLength(vector<int>& nums) {
//         int sum=0; int maxi=0;
//         unordered_map<int,int> mp{{0,-1}};
        
//         for(int i=0;i<nums.size();i++){
//             sum=sum+ nums[i]==0?-1:1;
//             if(mp.count(sum)){
//                 maxi=max(maxi, i-mp[sum]);
//             }
//             else{
//                 mp[sum]=i;
//             }
//         } 
//         return maxi;
        int sum=0, maxLen=0;
        unordered_map<int, int> seen{{0, -1}};
        
        for(int i=0; i<nums.size(); i++){
            sum += nums[i]==1 ? 1 : -1;
            if(seen.count(sum)) maxLen = max(maxLen, i-seen[sum]);
            else seen[sum] = i;
        }
        return maxLen;
    }
};