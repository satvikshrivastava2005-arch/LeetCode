class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long total_flower=(long long)m*k;
        if(total_flower>bloomDay.size()){
            return -1;}
        int s=*min_element(bloomDay.begin(),bloomDay.end());
        int e = *max_element(bloomDay.begin(),bloomDay.end());
        int ans =-1;
        while(s<=e){
         int mid = s+(e-s)/2;
         int count =0;
         int bouquets=0;
         for(int x :bloomDay){
           if(x<=mid){
            count++;
            if (count == k){
                bouquets++;
                count = 0;
                    } }
           else{
            count=0;}}
         if(bouquets>=m){
            ans=mid;
            e = mid - 1;
         }
         else{
        s = mid + 1;
         }
        }
        return ans;
    }
};