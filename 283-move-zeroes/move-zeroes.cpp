class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int l=-1,r=0;
        while(nums.size()>r)
        {
            if(nums[r]!=0)
            {
                swap(nums[++l],nums[r]);
               
            }
            r++;
        }
    }
};