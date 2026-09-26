class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0 ;
        int maxlen=0;
        vector<int> ans={};
        for(int r = 0 ; r < s.size(); r++){
           while (find(ans.begin(), ans.end(), s[r]) != ans.end()){
                ans.erase(ans.begin());
                l++;}
                ans.push_back(s[r]);
                 maxlen= max(maxlen, (int)ans.size());
        }
        return maxlen;
}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna