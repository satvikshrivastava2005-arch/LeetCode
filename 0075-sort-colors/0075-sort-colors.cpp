class Solution {
public:
    void sortColors(vector<int>& nums) {
     int n = nums.size();
      for (int i = 0; i < n; i++){
         for (int j = i + 1; j < n; j++){
            if (nums[i] >nums[j]){
                int temp =nums[i];
                nums[i] =nums[j];
                nums[j] = temp;
            }
        }
    }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna