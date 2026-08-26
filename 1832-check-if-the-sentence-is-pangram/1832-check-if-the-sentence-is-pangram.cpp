class Solution {
public:
    bool checkIfPangram(string sentence) {
        
        unordered_set<char> x (sentence.begin(), sentence.end());
        return x.size()==26;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna