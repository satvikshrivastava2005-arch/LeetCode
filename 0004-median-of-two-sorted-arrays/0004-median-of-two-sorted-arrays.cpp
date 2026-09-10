class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector < int > concate(nums1.begin(),nums1.end());
        double ans;
        for( int  i  =0 ; i < nums2.size(); i ++){
           concate.push_back(nums2[i]);
        }
        int n = concate.size();
        sort(concate.begin(), concate.end());
        if( n%2!=0){
           ans=concate[n/2];
           return ans ;
        }
        else{
           ans =(concate[n/2] + concate[(n/2)-1])/2.0;
           return ans;
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna