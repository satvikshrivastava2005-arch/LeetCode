class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max_c = *max_element(candies.begin(), candies.end());
        vector<bool> result(candies.size());
        for(int i =0 ; i< candies.size(); i++){
            result[i]=candies[i] + extraCandies >= max_c;
            
        }
        return result;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna