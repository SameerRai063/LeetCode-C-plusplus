class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> numbers;
        for (int i = 0; i<nums.size(); i++){
            int num = abs(nums[i] * nums[i]);
            numbers.push_back(nums[i]*nums[i]);
        }
        sort(numbers.begin(),numbers.end());
        return numbers;
    }
};