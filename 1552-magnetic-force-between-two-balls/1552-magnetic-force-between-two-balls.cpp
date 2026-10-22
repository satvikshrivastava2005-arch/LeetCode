class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
         sort(position.begin(), position.end());
        int s = 0;
        int e=position.back() - position.front();
        int dis=-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            int count=1;
            int last= position[0];
             for (int i = 1; i < position.size(); i++){
                if (position[i] - last >= mid){
                    count++;
                    last = position[i];
                }
            }
            if(count>=m){
                dis=mid;
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            }
        return dis;
    }
};