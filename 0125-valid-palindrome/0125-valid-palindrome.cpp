class Solution {
public:
    bool isPalindrome(string s) {
        string ans;
        int count=0;
        for (int i = 0; i < s.size(); i++){
            if (isalnum(s[i])) {
                ans+=tolower(s[i]);
            }}
        for (int i = 0; i < ans.size(); i++){
            if (ans[i]==ans[ans.size()-1-i]){
                count++; 
                }
            }
        
        if(count==ans.size()){
            return true;
        }else{
            return false;
        }
            
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna