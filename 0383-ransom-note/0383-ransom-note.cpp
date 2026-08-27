class Solution {
public:
    bool canConstruct(std::string ransomNote, std::string magazine) {
        unordered_map<char, int> charCounts;
        for (char c : magazine) {
            charCounts[c]++;
        }
        for (char c : ransomNote) {
            if (charCounts[c] == 0) {
                return false;
            }
            charCounts[c]--;
        }
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna