#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution
{
public:
    int minSubArrayLen(int target, vector<int> &nums)
    {
        int n = nums.size();
        int left = 0;
        int currSum = 0;
        int minLen = INT_MAX;

        for (int right = 0; right < n; ++right)
        {
            currSum += nums[right]; // Expand window to the right

            // Shrink window from the left as long as sum >= target
            while (currSum >= target)
            {
                minLen = min(minLen, right - left + 1);
                currSum -= nums[left];
                left++; // Shrink window
            }
        }

        return (minLen == INT_MAX) ? 0 : minLen;
    }
};