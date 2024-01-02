class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans=INT_MIN;
        int l=0,r=height.size()-1;
        while(l<r)
        {
            int area=(r-l)*min(height[r],height[l]);
            ans=max(ans,area);
            if(height[l]>height[r])
               r--;
            else
              l++;
        }
        return ans;
    }
};