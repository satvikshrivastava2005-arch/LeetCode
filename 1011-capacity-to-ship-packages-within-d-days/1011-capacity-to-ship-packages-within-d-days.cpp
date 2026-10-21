class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
       int low = *max_element(weights.begin(), weights.end());
       int high = accumulate(weights.begin(), weights.end(), 0);
       while(low<=high){
        int mid=low + (high - low) / 2;
        int days_n=1;
        int current_load=0;
         for (int weight : weights) {
                if (current_load + weight > mid) {
                    days_n++;
                    current_load = weight;
                } else {
                    current_load += weight;
                }
            }
          if (days_n > days) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
             }
       return low;
    }
};