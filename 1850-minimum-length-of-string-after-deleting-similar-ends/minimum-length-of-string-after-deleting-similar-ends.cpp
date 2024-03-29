class Solution {
public:
    int minimumLength(string s) {
        ios_base::sync_with_stdio(0);
        int left=0,right=s.size()-1;
        while(left<right)
        {
            if(s[left]!=s[right]) break;
            char c=s[left];
            while(left<s.size() && s[left]==c){
                left++;
            }
            while(left<right && s[right]==c){
                right--;
            }
        }
        return right-left+1;
    }
};