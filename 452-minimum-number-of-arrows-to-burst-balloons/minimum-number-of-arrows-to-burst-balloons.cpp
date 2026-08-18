class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end());
        int arrows = 1;
        int overlapStart = points[0][0];
        int overlapEnd = points[0][1];
        for (int i = 1; i < points.size(); i++) {
            if (points[i][0] <= overlapEnd) {
                overlapStart = max(overlapStart, points[i][0]);
                overlapEnd = min(overlapEnd, points[i][1]);
            }
            else {
                arrows++;
                overlapStart = points[i][0];
                overlapEnd = points[i][1];
            }
        }

        return arrows;
    }
};