class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>m;
        int c=0,mx=0;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
            if(m[nums[i]]>mx)
            {
                mx=m[nums[i]];
                c=0;
            }
            if(m[nums[i]]==mx){
                c++;
            }
        }
        return c*mx;
    }
};