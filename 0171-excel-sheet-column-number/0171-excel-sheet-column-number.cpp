class Solution {
public:
    int titleToNumber(string columnTitle) {
       long long result = 0;
        for (char c :columnTitle){
            int value = c-'A'+1;
            result=result*26+value;
        }  return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna