class Solution {
public:
//     void rev(vector<int>& nums,int low, int high)
//     {
//         while(low<high){
//             swap(nums[low],nums[high]);
//             low++;
//             high--;
//         }
//     }
     void rotate(vector<int>& nums, int k) {
         k=k%nums.size();
    reverse(nums.begin(),nums.end());
     reverse(nums.begin(),nums.begin()+(k));
     reverse(nums.begin()+k,nums.end());
//         
//         rev(nums,0,nums.size()-k-1);
//         rev(nums,nums.size()-k,nums.size()-1);
//         rev(nums,0,nums.size()-1);
      
  }
    
};