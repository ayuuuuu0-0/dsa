#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

class Solution
{
public:
    int minMoves(vector<int> &nums)
    {
        int n = nums.size();
        int maxVal = 0;
        int totalSum = 0;

        for (int x : nums)
        {
            maxVal = max(maxVal, x);
            totalSum += x;
        }

        return (maxVal * n) - totalSum;
    }
};
