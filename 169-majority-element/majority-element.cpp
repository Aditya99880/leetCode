class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int val,cnt=0;
        for(auto i:nums)
        {
            if(cnt==0)
            {
                val=i;
                cnt++;
            }
            else if(val==i)
            {
                cnt++;
            }
            else{
                cnt--;
            }
        }
        return val;
    }
};