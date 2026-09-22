class Solution {
public:
int kadanemax(vector<int>& a){
     int current = a[0];
         int best = a[0];
     int n = a.size();
         for (int i = 1; i < n; i++) {
          current = max(a[i], current + a[i]);
           best = max(best, current);
             }
             return best;

        }
    int kadanemin(vector<int>& a){
         int current = a[0];
         int best = a[0];
        int n = a.size();
         for (int i = 1; i < n; i++) {
          current = min(a[i], current + a[i]);
           best = min(best, current);
             }
             return best;

    }
    int maxSubarraySumCircular(vector<int>& nums) {
       int total=0;
       for(int i:nums){
         total+=i;
         
       }int maxsum=kadanemax(nums);
         int minsum=kadanemin(nums);
         int circular=total-minsum;
         if (maxsum < 0) {
            return maxsum;
        }else{
         return max(maxsum,circular);}
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna