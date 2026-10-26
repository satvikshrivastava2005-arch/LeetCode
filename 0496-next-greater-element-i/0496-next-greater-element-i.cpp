class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>s;
        unordered_map<int,int> mp;
        for(int x: nums2){
            while(!s.empty() && s.top()<x){
                mp[s.top()]=x;
                s.pop();
            }
            s.push(x);
        }
        vector <int>ans;
        for(int x:nums1){
            if(mp.count(x)){
                ans.push_back(mp[x]);
            }
            else{
                ans.push_back(-1);
            }
        }
        return ans;
    }
};