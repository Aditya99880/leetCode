class Solution {
public:
    struct compare {
    bool operator()(pair<int, int> p1, pair<int, int> p2)
    {
        if (p1.second == p2.second)
            return p1.first < p2.first;
 
        return p1.second < p2.second;
    }
};
    vector<int> topKFrequent(vector<int>& nums, int k) {
       unordered_map<int, int> mp;
    for (auto i:nums)
        mp[i]++;
 
    vector<int> ans;
    priority_queue<pair<int, int>, vector<pair<int, int> >,compare>pq(mp.begin(), mp.end());
    while(k--) {
        ans.push_back(pq.top().first);
        pq.pop();
    }
    return ans;
    }
};