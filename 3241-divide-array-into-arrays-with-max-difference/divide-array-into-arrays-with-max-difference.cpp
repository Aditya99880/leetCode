class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size()/3;i++)
        {
           int a=nums[i*3+0];
            int b=nums[i*3+1];
            int c=nums[i*3+2];
            if(c-a<=k) {
                vector<int>t;
                t.push_back(a);
                t.push_back(b);
                t.push_back(c);
                ans.push_back(t);
            } else {
                ans.clear();
                return ans;
            }
        }
       return ans;
    }
};