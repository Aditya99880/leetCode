class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
     vector<int> prod(nums.size(),1);
     int temp=1,i,n=nums.size();

      for (i = 0; i < n; i++) { 
        prod[i] = temp; 
        temp *= nums[i]; 
    } 
    temp = 1; 
  
    
    for (i = n - 1; i >= 0; i--) { 
        prod[i] *= temp; 
        temp *= nums[i]; 
    } 
    return prod;
          
    }
};