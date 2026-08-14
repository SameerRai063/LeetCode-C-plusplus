class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left = 0;
        int right = n-1;
        int best = 0;
        while (left<right){
            int width = right - left;
            int area = width * ((height[left]<height[right]) ? height[left] : height[right]);
            if (area> best){
                best = area;
            }
            if (height[left]<height[right]){
                left++;
            }
            else{right --;}
        }
return best;

    }
    
};