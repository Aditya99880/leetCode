class Solution {
public:
vector<int> applyOperations(vector<int>& nums) {
    int l = -1, r = 0;
     while(r < nums.size() ) { 
        if (r+1<nums.size() && nums[r] == nums[r + 1]) {
            nums[r] *= 2;
            nums[r + 1] = 0;
        }
        if (nums[r] != 0) {
            ++l;
            swap(nums[l], nums[r]);
        }
        r++;
    }
    return nums;}
};