class Solution {
public:
    int minAddToMakeValid(string s) {
        vector<char> v(s.begin(), s.end());
        int open = 0;
        int complete = 0;
        for (char c: s){
            if (c=='(') {
                complete++;
            }else{
                if(complete>0) {
                    complete--;
                }else{
                    open++;
                }
            }
        }

        return open + complete;
    }     
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna