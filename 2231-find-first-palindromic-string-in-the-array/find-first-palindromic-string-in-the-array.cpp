class Solution {
public:
    bool check(string &s)
    {
        int n=s.size()-1;
        for(int i=0;i<n/2+1;i++)
        {
            if(s[i]!=s[n-i]) return false;
        
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        for(auto &i:words)
        {
            if(i[0]==i[i.size()-1]){
                if(check(i)) return i;
            }
        }
        return "";
    }
};