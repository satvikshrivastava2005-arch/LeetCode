class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
    unordered_map<long long, int> pref_freq;
    pref_freq[0] = 1;
    long long current_pref = 0;
    int count = 0;
    for (int x : nums) {
        current_pref += x;
        if (pref_freq.count(current_pref - k)) {
            count += pref_freq[current_pref - k];
        }
        pref_freq[current_pref]++;
    }
    return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna