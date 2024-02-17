class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        int i = 0;
        priority_queue<int> pq;

        for(i=0; i<heights.size()-1; i++) {
            if(heights[i] >= heights[i+1]) continue;
            else if(heights[i] < heights[i+1]) {
                int bricksNeeded = heights[i+1] - heights[i];
                
                bricks -= bricksNeeded;
                pq.push(bricksNeeded);

                if(!pq.empty() && bricks < 0) {
                    bricks += pq.top();
                    pq.pop();
                    ladders--;
                }

                if(ladders < 0) break;
            }
        }

        return i;
    }
};