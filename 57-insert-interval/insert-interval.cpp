class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> results;
        for (int i = 0; i < intervals.size(); i++) {
            if (intervals[i][1] < newInterval[0]) {
                results.push_back(intervals[i]);
            }
            else if (intervals[i][0] > newInterval[1]) {
                results.push_back(newInterval);
                for (int j = i; j < intervals.size(); j++) {
                    results.push_back(intervals[j]);
                }
                return results;
            }
            else {
                newInterval[0] = newInterval[0] < intervals[i][0] ? newInterval[0] : intervals[i][0];
                newInterval[1] = newInterval[1] > intervals[i][1] ? newInterval[1] : intervals[i][1];
            }
        }
        results.push_back(newInterval);
        return results;
    }
};