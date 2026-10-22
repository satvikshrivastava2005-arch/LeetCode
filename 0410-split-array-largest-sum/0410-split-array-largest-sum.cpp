class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        long long s=0, e=0;
        for (int x : nums){
            s = max(s, (long long)x);
            e += x;
        }
        long long ans=e;
        while(s<=e){
            long long mid = s + (e - s) / 2;
            long long group=1; long long current_sum=0;
            for (int x : nums) {
                if (current_sum + x <= mid) {
                    current_sum += x;
                } else{
                    group++;
                    current_sum = x;
                }
            }
            if(group<=k){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }

        }
        return ans;
    }
};