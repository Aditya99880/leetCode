class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans,temp;
        temp=ans=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            temp=max(temp+nums[i],nums[i]);
            ans=max(temp,ans);
        }
        return ans;
    }
};