class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int>distinct_candies(candyType.begin(), candyType.end());
        int n = candyType.size()/2;

        int distinctCandies = distinct_candies.size();
        return min(distinctCandies, n);
    }
};