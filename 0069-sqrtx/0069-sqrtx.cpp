class Solution {
public:
    int mySqrt(int x) {
        if (x == 0) return 0;
        for (long long i = 1; i <= x; i++) {
            if (i * i > x) {
                return i - 1;
            }
        }
        return 1; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna