#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution
{
public:
    int minimumSumSubarray(vector<int> &nums, int l, int r)
    {
        int minSum = INT_MAX;
        int n = nums.size();

        // Try all possible subarray lengths from l to r
        for (int len = l; len <= r; ++len)
        {
            // Try all starting positions for this length
            for (int i = 0; i <= n - len; ++i)
            {
                int currentSum = 0;
                for (int j = i; j < i + len; ++j)
                {
                    currentSum += nums[j];
                }

                // We only care if the sum is strictly positive (> 0)
                if (currentSum > 0)
                {
                    minSum = min(minSum, currentSum);
                }
            }
        }

        return (minSum == INT_MAX) ? -1 : minSum;
    }
};
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution
{
public:
    int minimumSumSubarray(vector<int> &nums, int l, int r)
    {
        int minSum = INT_MAX;
        int n = nums.size();

        // Try all possible subarray lengths from l to r
        for (int len = l; len <= r; ++len)
        {
            // Try all starting positions for this length
            for (int i = 0; i <= n - len; ++i)
            {
                int currentSum = 0;
                for (int j = i; j < i + len; ++j)
                {
                    currentSum += nums[j];
                }

                // We only care if the sum is strictly positive (> 0)
                if (currentSum > 0)
                {
                    minSum = min(minSum, currentSum);
                }
            }
        }

        return (minSum == INT_MAX) ? -1 : minSum;
    }
};