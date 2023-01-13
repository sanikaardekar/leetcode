class Solution {
public:
    double average(vector<int>& salary) {
        double sum=0;
        int n=salary.size();
        sort(salary.begin(),salary.end());
        for(int i=1;i<n-1;i++){
            sum=sum+salary[i];
        }
        return (sum/(n-2));
    }
};