class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> v(nums.size());
        int l=0,r=nums.size()-1;
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(abs(nums[l])>abs(nums[r]))
            {
                v[i]=pow(nums[l],2);
                l++;
            }
            else{
                  v[i]=pow(nums[r],2);
                r--;
            }
        }
        return v;
    }
};