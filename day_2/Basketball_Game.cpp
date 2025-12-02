class Solution {
public:
    int inDigit(string s) {
        int result = 0;
        int sign = 1, i = 0;
        if (s[0] == '-') {
            sign = -1;
            i = 1;
        }
        for (; i < s.length(); i++) {
            result = result * 10 + (s[i] - '0');
        }
        return sign * result;
    }
    int calPoints(vector<string>& op) {
        vector<int> score;
        int n = op.size();
        for (int i = 0; i < n; i++) {
            if (op[i] == "+") {
                int size = score.size();
                score.push_back(score[size - 1] + score[size - 2]);
            } else if (op[i] == "D") {
                score.push_back(2 * score[score.size() - 1]);
            } else if (op[i] == "C") {
                score.pop_back();
            } else {
                score.push_back(inDigit(op[i]));
            }
        }
        int sum = 0;
        for (int i : score)
            sum += i;
        return sum;
    }
};