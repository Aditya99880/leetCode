class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int num=0;
        for(auto &i:s){
         num+=(i-'0');
         i='0';}
        if(num==0) return s;
        else{
            s[s.size()-1]='1';
            num--;
            int i=0;
            while(num>0)
            {
                s[i]='1';
                i++;
                num--;
            }
        }
         return s;
    }
};