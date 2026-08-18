class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> v;
        for (int i = 0; i < 2 * n; i++) {
            if (i % 2 == 0) {
                v.push_back(nums[i / 2]);     
            } else {
                v.push_back(nums[n + (i / 2)]); 
            }
        }
        return v;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna