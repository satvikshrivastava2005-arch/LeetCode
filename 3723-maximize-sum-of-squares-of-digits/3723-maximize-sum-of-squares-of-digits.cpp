class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if (sum > 9LL * num) {
        return "";
    }
    string result = "";
    for (int i = 0; i < num; i++) {
        if (sum >= 9) {
            result += '9';
            sum -= 9;
        } else {
            result += to_string(sum);
            sum = 0;
        }
    }
    return result;
    }
};