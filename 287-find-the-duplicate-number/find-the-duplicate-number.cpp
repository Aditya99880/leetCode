class Solution {
public:
    int findDuplicate(vector<int>& nums ) {
        vector<int> arr(nums.size(),0);
        for(auto i:nums)
        {
            if(arr[i]!=0)
                return i;
            arr[i]++;
        }
        return -1;

    }
};