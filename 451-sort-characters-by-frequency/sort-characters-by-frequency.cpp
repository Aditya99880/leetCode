class Solution {
public:
    struct myComp {
    constexpr bool operator()(
        pair<int, int> const& a,
        pair<int, int> const& b)
        const noexcept
    {
        return a.second < b.second;
    }
};
    string frequencySort(string s) {
        map<char,int> mp;
        
        for(auto i:s) mp[i]++;
        priority_queue<pair<char,int>,vector<pair<char,int>>,myComp> pq(mp.begin(),mp.end());
        s="";
        while(!pq.empty())
        {
            int freq = pq.top().second;
            char ch = pq.top().first;
            for(int i=0; i<freq; i++){
              s+=ch;
            }
            pq.pop(); //Heapify happens  
  
        }
        return s;
    }
};