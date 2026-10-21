class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        
        // Handle cases where k is greater than the size of the array
        k = k % n; 
        
        // Step 1: Reverse the entire vector
        reverse(nums.begin(), nums.end());
        
        // Step 2: Reverse the first k elements
        reverse(nums.begin(), nums.begin() + k);
        
        // Step 3: Reverse the remaining elements from index k to the end
        reverse(nums.begin() + k, nums.end());
    }
};