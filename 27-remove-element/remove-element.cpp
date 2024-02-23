class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int lptr=-1,rptr=0;
        while(rptr<nums.size())
        {
            if(nums[rptr]!=val)
            {
                lptr++;
                swap(nums[lptr],nums[rptr]);
                rptr++;
            }
            else
            {
                rptr++;
            }
        }
        int i=nums.size();
        for(auto it=nums.rbegin();it!=nums.rend();it++,i--)
        {
            if(*it!=val)
               return i;
        }
        return i;
    }
};