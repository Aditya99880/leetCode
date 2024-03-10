class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>st(nums1.begin(),nums1.end());
        vector<int> vec;
        
        for(auto &i:nums2){
            if(st.find(i)!=st.end()){
                vec.push_back(i);
                st.erase(st.find(i));
            }
        }
        return vec;
    }
};