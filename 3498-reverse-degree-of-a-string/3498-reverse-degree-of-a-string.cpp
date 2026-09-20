class Solution {
public:
    int reverseDegree(string s) {
        int total_degree = 0;
        for (int i = 0; i < s.length(); ++i){
            int rev_alphabet_pos='z'-s[i]+1;
            total_degree +=rev_alphabet_pos*(i+1);
        }
        return total_degree;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna