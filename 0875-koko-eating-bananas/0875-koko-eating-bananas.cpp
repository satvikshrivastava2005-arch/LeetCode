class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int speed_min=1;
        int  speed_max=*max_element(piles.begin(), piles.end());
        int ans= speed_max;
        while(speed_min<=speed_max){
            int mid=speed_min+(speed_max-speed_min)/2;
            long long  hours= 0;
            for(int pile:piles){
                hours+=(pile+mid-1)/mid;}
            if(hours<=h){
               ans=mid ;
               speed_max=mid-1;
            }
            else{
                speed_min=mid+1;
            }
        }
        return ans;
    }
};