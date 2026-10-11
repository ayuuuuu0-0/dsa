#include <vector>

using namespace std;

class Solution
{
public:
    int sumOfSquares(vector<int> &nums)
    {
        int n = nums.size();
        int totalSum = 0;

        for (int i = 0; i < n; ++i)
        {
            // Check if (i + 1) divides n evenly
            if (n % (i + 1) == 0)
            {
                totalSum += nums[i] * nums[i];
            }
        }

        return totalSum;
    }
};