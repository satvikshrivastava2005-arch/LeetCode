class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        sort(heaters.begin(), heaters.end());
        int ans = 0;

        for (int house : houses) {
            int l = 0, r = heaters.size() - 1;
            int pos = -1;

            while (l <= r) {
                int mid = l + (r - l) / 2;

                if (heaters[mid] >= house) {
                    pos = mid;
                    r = mid - 1;
                } else {
                    l = mid + 1;
                }
            }

            int right = INT_MAX, left = INT_MAX;

            if (pos != -1)
                right = heaters[pos] - house;

            if (pos == -1)
                left = house - heaters.back();
            else if (pos > 0)
                left = house - heaters[pos - 1];

            ans = max(ans, min(left, right));
        }

        return ans;
    }
};