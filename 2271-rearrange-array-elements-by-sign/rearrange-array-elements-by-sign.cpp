class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>num,num2;
        int k=0,j=0;
        for(auto &i:nums)
        {
            if(i>=0) num.push_back(i);
            else num2.push_back(i);
        }
        for(int i=0;i<nums.size();i++)
        {
            if(i%2==0) nums[i]=num[k++];
            else nums[i]=num2[j++];
        }
        return nums;
    }
};