class Solution {
public:
    int strStr(string haystack, string needle) {
      size_t pos=haystack.find(needle);
      if (pos != string::npos) {
         return pos;
         }
       else {
             return -1;
            }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna