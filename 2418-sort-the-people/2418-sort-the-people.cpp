class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
    
        vector<pair<int , string>> s ;
        vector<string> ans;
        for(int i=0;i<names.size();i++){
           s.push_back({heights[i], names[i]});
        }
        sort(s.rbegin(),s.rend());
         for(int i=0;i<s.size();i++){
            ans.push_back(s[i].second);
         }return ans;
     }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna