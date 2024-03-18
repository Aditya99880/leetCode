class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
         vector<int> prev;
         prev.push_back(points[0][0]);
         prev.push_back(points[0][1]);
         int ans=1;
         for(auto &i:points)
         {
            if(i[0]>prev[1])
            {
                ans++;
                prev[0]=i[0];
                prev[1]=i[1];
            }
            else
            {
                prev[1]=min(prev[1],i[1]);
            }
         }
        return ans;
    }
};