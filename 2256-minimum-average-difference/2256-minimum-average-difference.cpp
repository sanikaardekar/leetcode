class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int mini= INT_MAX;
        int n=nums.size();
        int ans=-1;
        vector<long long> ps(n+1);
        vector<long long> ss(n+1);
        for(int i=0;i<n;i++){
            ps[i+1]=ps[i]+nums[i];
        }
        for(int i=n-1;i>=0;i--){
            ss[i]=ss[i+1]+nums[i];
        }
        for(int ind=0;ind<n;ind++)
        {
            long long left=0;
            long long right=0;
            left=ps[ind+1];
            left=left/(ind+1);
            right=ss[ind+1];
            if(ind!=nums.size()-1)
            {
                right=right/(n-ind-1);
            }
            int cd = int(abs(left-right));
            if(cd<mini)
                             {
                                 mini=cd;
                                 ans=ind;
                             }
        }
        return ans;
    }
};