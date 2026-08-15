class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
       vector<int> reversed(n);
       for (int i = 0;i<n;i++){
        reversed[(i+k) % n] = nums[i];
       }
       for (int i = 0;i<n;i++){
        nums[i] = reversed[i];
       }
       
    }
};