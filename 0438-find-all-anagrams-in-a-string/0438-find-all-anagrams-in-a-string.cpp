class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
         int n = s.length();
    int k = p.length();
    vector<int> result;
    if (n < k) return result;
    vector<int> pfreq(26, 0);
    vector<int> windowfreq(26, 0);
    for (int i = 0; i < k; i++) {
        pfreq[p[i] - 'a']++;
        windowfreq[s[i] - 'a']++;
    }
    if (pfreq == windowfreq) {
        result.push_back(0);
    }
    for (int i = k; i < n; i++) {
        windowfreq[s[i] - 'a']++; 
        windowfreq[s[i - k] - 'a']--; 
        if (pfreq == windowfreq) {
            result.push_back(i - k + 1); 
        }
    }
    return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna