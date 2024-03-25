class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_set<int>s;
        vector<int>ans;
        for(auto &i:nums)
        {
            if(s.find(i)!=s.end())
              ans.push_back(i);
            s.insert(i);
        }
        return ans;
    }
};