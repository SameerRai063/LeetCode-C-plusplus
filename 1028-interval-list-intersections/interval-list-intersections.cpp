class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        int i =0;
        int j = 0;
        vector<vector<int>> results;
        while (i< firstList.size() && j < secondList.size()){
            int start = firstList[i][0] > secondList[j][0] ? firstList[i][0] : secondList[j][0]; 
            int end = firstList[i][1] < secondList[j][1] ? firstList[i][1] : secondList[j][1];
            if (start <=end){
                results.push_back({start,end});
            }
            if (firstList[i][1] < secondList[j][1]){
                i++;
            }
            else {j++;}
        }
   return results; }
};