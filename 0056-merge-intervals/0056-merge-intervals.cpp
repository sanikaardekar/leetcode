class Solution {
public:
    //sorting
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> res;
        sort(intervals.begin(),intervals.end());
        for(auto inte: intervals){
            //6<8 ok-->add
            if(res.empty() || res.back()[1]<inte[0])
                res.push_back(inte);
            else{
                //3 and 6 max-->6-->1,6
                res.back()[1]=max(res.back()[1],inte[1]);
            }
        }
        return res;
    }
};