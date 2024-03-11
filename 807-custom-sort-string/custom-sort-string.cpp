class Solution {
public:
    string customSortString(string order, string s) {
        unordered_multiset<char>st(s.begin(),s.end());
        s="";
        for(auto & i:order){
            while(st.find(i)!=st.end())
            {
                s=s+i;
                st.erase(st.find(i));
            }
        }
       for(auto i:st)
         s=s+i;
      return s;
    }
};