class Solution {
public:
    int calculate(string s) {
        long long currentNumber = 0;
        char currentOperation = '+';
        vector<int> stack;
        
        for (int i = 0; i < s.length(); i++) {
            char currentChar = s[i];
            
            if (isdigit(currentChar)) {
                currentNumber = (currentNumber * 10) + (currentChar - '0');
            }
            
            if (!isdigit(currentChar) && !isspace(currentChar) || i == s.length() - 1) {
                if (currentOperation == '-') {
                    stack.push_back(-currentNumber);
                } else if (currentOperation == '+') {
                    stack.push_back(currentNumber);
                } else if (currentOperation == '*') {
                    int top = stack.back();
                    stack.pop_back();
                    stack.push_back(top * currentNumber);
                } else if (currentOperation == '/') {
                    int top = stack.back();
                    stack.pop_back();
                    stack.push_back(top / currentNumber);
                }
                currentOperation = currentChar;
                currentNumber = 0;
            }
        }
        
        int result = 0;
        for (int num : stack) {
            result += num;
        }
        
        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna