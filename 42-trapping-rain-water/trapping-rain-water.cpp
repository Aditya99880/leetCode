class Solution {
public:
    int trap(vector<int>& height) {
        int l=0,r=height.size()-1,lmax=height[0],rmax=height[r];
        unsigned int ans=0;
        while(l<r){
            if(lmax<rmax)
            {
                l++;
                lmax=max(lmax,height[l]);
                ans+=lmax-height[l];
            }
            else{
                r--;
                rmax=max(rmax,height[r]);
                ans+=rmax-height[r];
            }
        }
        return ans;
    }
};