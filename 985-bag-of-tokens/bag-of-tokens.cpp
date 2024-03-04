class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int maxscore=0,score=0;
        int i=0,j=tokens.size()-1;
        sort(tokens.begin(),tokens.end());
        while(i<=j)
        {
            if(power>=tokens[i])
            {
                power-=tokens[i++];
                score++;
                maxscore=max(maxscore,score);
            }
            else if(score>=1){
                power+=tokens[j--];
                score--;

            }
            else break;
        }
        return maxscore;
    }
};