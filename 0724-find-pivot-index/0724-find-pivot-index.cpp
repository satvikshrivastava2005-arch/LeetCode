class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalSum = 0;
        for (int num :nums){
            totalSum +=num;
        }
        int leftsum= 0;
        for (int i = 0; i < nums.size();i++){
            if (leftsum ==totalSum- leftsum- nums[i]){
                return i;
            }
            leftsum += nums[i];
        }
        return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna