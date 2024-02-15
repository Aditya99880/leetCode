class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        long long ans=0;
        for(auto &i:nums)
          ans+=i;
        long long curr=0;
        for(auto i=nums.rbegin();i<nums.rend();i++)
        {
            curr+=*i;
            long long total=ans-curr;
            if(total>*i) return total+*i;
        }
        return -1;
    }
};