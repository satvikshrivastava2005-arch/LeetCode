class Solution {
public:
    int maxVowels(string s, int k) {
        int total = 0;
        int ans = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' ||
                s[i] == 'o' || s[i] == 'u') {
                total++;
            }
            if (i >= k) {
                if (s[i-k] == 'a' || s[i-k] == 'e' || s[i-k] == 'i' ||
                    s[i-k] == 'o' || s[i-k] == 'u') {
                    total--;
                }
            }
            if (i >= k-1) {
                ans = max(ans, total);
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna