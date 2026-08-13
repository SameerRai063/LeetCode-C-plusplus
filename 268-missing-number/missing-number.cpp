class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int range = nums.size();
        int answer = -1;
        for (int i = 0; i <= range; i++) {
            bool found = false;

            for (int j = 0; j < nums.size(); j++) {
                if (nums[j] == i) {
                    found = true;
                    break;
                }
            }

            if (!found) {
            answer = i;
            }
        }

        return answer;
    }
};