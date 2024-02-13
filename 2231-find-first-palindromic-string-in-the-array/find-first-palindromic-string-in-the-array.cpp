class Solution {
public:
   
    string firstPalindrome(vector<string>& words) {
        int i,f=0;
        for(auto &j:words)
        {
            f=0;
            int n=j.size()-1;
            for(i=0;i<n/2+1;i++){
                if(j[i]!=j[n-i]){
                    f=-1;
                    break;
                }
            }
            if(f==0)
             return j;
        }
        return "";
    }
};