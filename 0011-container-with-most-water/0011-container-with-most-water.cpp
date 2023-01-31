class Solution {
public:
    int maxArea(vector<int>& height) {
        int area=0;
        int h;
        int left=0;
        int right=height.size()-1;
        while(left<right)
        {
            h = min(height[left],height[right]);
            area=max(area,h*(right-left));
            
                if(height[left]<height[right])
                {
                    left++;
                }
            else 
            {
                right--;
            }
        }
        return area;
    }
};