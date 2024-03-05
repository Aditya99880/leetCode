class Solution {
public:
    int minimumLength(string s) {
        int i=0,j=s.size()-1;
        while(s[i]==s[j] && i<j){
            char ch=s[i];
            while(s[i]==ch && i<=j) i++;
            while(s[j]==ch && i<=j) j--;
            if(i>j) return 0;
            else if(i==j) return 1;
        }
        return j-i+1;
    }
};