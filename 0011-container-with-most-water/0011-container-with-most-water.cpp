class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxwater=0;
        int lp=0 ;
        int rp=height.size()-1;
        while(lp<rp){
            int w = rp-lp;
            int ht = min ( height[lp],height[rp]);
            int currentwater = w*ht;
            maxwater=max(maxwater,currentwater);
            height[lp]<height[rp]? lp++:rp--;
        }
        return maxwater;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna