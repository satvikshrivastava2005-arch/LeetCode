class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> rti = {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},
        {'D',500},{'M',1000}};
        int ans = 0;
        for (int i = 0; i< s.size();i++) {
            if ((i+1)<s.size() &&rti[s[i]]<rti[s[i+1]]){
                ans-=rti[s[i]];
            } else {
                ans+=rti[s[i]];
            }
        }
        return ans ;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna