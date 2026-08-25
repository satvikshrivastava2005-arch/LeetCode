class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s ;
        for(int i =0 ; i < nums.size() ; i++){
          s.insert(nums[i]);
        }
        if(s.size()==nums.size()){
            return false;
        }
        else{
            return true;
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna