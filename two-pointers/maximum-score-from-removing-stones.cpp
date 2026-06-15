class Solution {
public:
    int maximumScore(int a, int b, int c) {
        vector<int> score = {a, b, c};
        sort(score.begin(), score.end());
        int result = 0;

        if (score[0] + score[1] <= score[2]){
            result = score[0] + score[1];
        }
        else {
            result = (score[0] + score[1] + score[2]) / 2;
        }
        return result;
    }
};