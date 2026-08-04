class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        int count = 0;
        bool loop = true;

        while (loop) {
            if (count >= strs[0].length())
                break;
            char current = strs[0][count];
            for (int i = 1; i < strs.size(); i++) {
                if (count >= strs[i].length() || strs[i][count] != current) {
                    loop = false;
                    break;
                }
            }
            if (loop)
                count++;
        }
        return strs[0].substr(0, count);
    }
};