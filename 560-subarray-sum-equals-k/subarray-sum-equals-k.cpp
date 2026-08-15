class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0;
        for (int i = 0; i<nums.size();i++){
            int currentsum = 0;
            for (int j = i; j<nums.size();j++){
                currentsum = currentsum + nums[j];
                if (currentsum == k) {
                    count ++;
                }
            }
        } return count;
}};