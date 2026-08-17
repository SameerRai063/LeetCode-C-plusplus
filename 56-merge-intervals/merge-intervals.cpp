class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> answers;
        sort(intervals.begin(),intervals.end());
        answers.push_back(intervals[0]);
        for (int i =1 ; i<intervals.size();i++){
            int nextstart = intervals[i][0];
            int currentend = answers.back()[1];
            int nextend = intervals[i][1];
            if (nextstart <= currentend){
                 answers.back()[1] = currentend < nextend ? nextend : currentend;
            }
            else {
                answers.push_back(intervals[i]);
            }
        }

    return answers;}
};