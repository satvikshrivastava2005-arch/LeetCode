class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int n = nums.size();
        vector<int > pse(n,-1),nse(n,n);
        vector<int> pge(n,-1), nge(n,n);
        stack<int>st;
        for(int i = 0 ; i < n ; i++){
            while(!st.empty() && nums[st.top()]>= nums[i]){
                st.pop();
            }
            if(!st.empty()){
                pse[i]=st.top();
            }
            st.push(i);
        }
        while(!st.empty()){
            st.pop();
        }
        for(int i = n-1; i>=0; i--){
            while(!st.empty() && nums[st.top()] > nums[i]){
                st.pop();
            }
            if(!st.empty()){
                nse[i]=st.top();
            }
            st.push(i);
        }
        while(!st.empty()){
            st.pop();
        }
        for(int i = 0 ; i < n ; i++){
            while(!st.empty() && nums[st.top()]<= nums[i]){
                st.pop();
            }
            if(!st.empty()){
                pge[i]=st.top();
            }
            st.push(i);
        }
        while(!st.empty()){
            st.pop();
        }
        for(int i = n-1; i>=0; i--){
            while(!st.empty() && nums[st.top()] < nums[i]){
                st.pop();
            }
            if(!st.empty()){
                nge[i]=st.top();
            }
            st.push(i);
        }

        long long min = 0 ;
        long long max = 0 ; 
        const int MOD = 1e9 + 7;
        for(int i = 0 ; i < n ; i++){
            long long l = i-pse[i];
            long long r = nse[i]-i;
            min+=l*r*nums[i];
            l = i-pge[i];
            r = nge[i]-i;

            max += l*r*nums[i];
        }
        return max-min;
    }
};