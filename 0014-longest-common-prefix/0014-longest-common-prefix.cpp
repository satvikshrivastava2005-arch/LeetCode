class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       for (int k = 0; k < strs[0].length(); ++k) {
            char c = strs[0][k];
            for (int i = 1; i < strs.size(); i++) {
                if (k == strs[i].length() || strs[i][k] != c) {
                    return strs[0].substr(0, k); 
                }
            }
        }
        return strs[0];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna