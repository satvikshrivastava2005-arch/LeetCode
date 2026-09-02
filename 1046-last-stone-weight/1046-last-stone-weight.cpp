class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq(stones.begin(), stones.end());
        while (pq.size() > 1) {
            int y = pq.top(); pq.pop();
            int x = pq.top(); pq.pop();

            if (x != y) {
                pq.push(y - x);
            }
        }
        return pq.empty() ? 0 : pq.top();
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna