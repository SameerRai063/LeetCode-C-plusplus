class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        vector<bool> results(n);

        int maxCandies = candies[0];

        for (int i = 1; i < n; i++) {
            if (candies[i] > maxCandies) {
                maxCandies = candies[i];
            }
        }

        for (int i = 0; i < n; i++) {
            int candi = candies[i] + extraCandies;

            if (candi >= maxCandies) {
                results[i] = true;
            }
            else {
                results[i] = false;
            }
        }

        return results;
    }
};