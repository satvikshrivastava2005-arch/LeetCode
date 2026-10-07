class Solution {
private:
    const int MOD = 1337;
    int modPow(int base, int k) {
        base %= MOD;
        int res = 1;
        while (k > 0) {
            if (k & 1) res = (res * base) % MOD;
            base = (base * base) % MOD;
            k >>= 1;
        }
        return res;
    }
public:
    int superPow(int a, vector<int>& b) {
        int result = 1;
        for (int digit : b) {
            result = (modPow(result, 10) * modPow(a, digit)) % MOD;
        }
        return result;
    }
};