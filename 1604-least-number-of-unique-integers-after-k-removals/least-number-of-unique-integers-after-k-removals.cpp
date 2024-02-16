
class Solution {
public:
   
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        int n=arr.size();
        unordered_map<int,int>mp;
        for(auto &i:arr)
        {
            mp[i]++;
        }
        int unique=mp.size();
       vector<int> freq(n+1,0);
       for(auto i:mp)
       {
           int f=i.second;
           freq[f]++;
       }
        for(int f=1;f<=n;f++)
        {
            int types=min(k/f,freq[f]);
            k-={types*f};
            unique-=types;
            if(k<=f){
                return unique;
            }
        }
        return 0;

    }
};