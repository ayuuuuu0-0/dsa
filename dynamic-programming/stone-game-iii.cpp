class Solution
{
public:
    int n;
    vector<int> t;

    int solve(vector<int> &stoneValue, int i)
    {
        if (i == n)
            return 0;

        if (t[i] != -1)
            return t[i];

        t[i] = stoneValue[i] - solve(stoneValue, i + 1);

        if (i + 1 < n)
            t[i] = max(t[i], stoneValue[i] + stoneValue[i + 1] - solve(stoneValue, i + 2));

        if (i + 2 < n)
            t[i] = max(t[i], stoneValue[i] + stoneValue[i + 1] + stoneValue[i + 2] - solve(stoneValue, i + 3));

        return t[i];
    }

    string stoneGameIII(vector<int> &stoneValue)
    {
        n = stoneValue.size();
        t.resize(n + 1, -1);

        int diff = solve(stoneValue, 0);

        if (diff < 0)
            return "Bob";
        else if (diff > 0)
            return "Alice";

        return "Tie";
    }
};
#include <vector>
#include <unordered_set>
#include <algorithm>

class Solution {
public:
    std::vector<int> findMissingElements(std::vector<int>& nums) {
        int minNum = *std::min_element(nums.begin(), nums.end());
        int maxNum = *std::max_element(nums.begin(), nums.end());
        
        std::unordered_set<int> numSet(nums.begin(), nums.end());
        std::vector<int> missingNums;
        
        for (int i = minNum; i <= maxNum; i++) {
            if (numSet.find(i) == numSet.end()) {
                missingNums.push_back(i);
            }
        }
        
        return missingNums;
    }
};