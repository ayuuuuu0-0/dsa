#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int longestMonotonicSubarray(vector<int> &nums)
    {
        if (nums.empty())
            return 0;

        int maxLength = 1;
        int inc = 1;
        int dec = 1;

        for (int i = 0; i < nums.size() - 1; ++i)
        {
            if (nums[i + 1] > nums[i])
            {
                inc++;
                dec = 1;
            }
            else if (nums[i + 1] < nums[i])
            {
                dec++;
                inc = 1;
            }
            else
            {
                inc = 1;
                dec = 1;
            }
            maxLength = max({maxLength, inc, dec});
        }

        return maxLength;
    }
};
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int longestMonotonicSubarray(vector<int> &nums)
    {
        if (nums.empty())
            return 0;

        int maxLength = 1;
        int inc = 1;
        int dec = 1;

        for (int i = 0; i < nums.size() - 1; ++i)
        {
            if (nums[i + 1] > nums[i])
            {
                inc++;
                dec = 1;
            }
            else if (nums[i + 1] < nums[i])
            {
                dec++;
                inc = 1;
            }
            else
            {
                inc = 1;
                dec = 1;
            }
            maxLength = max({maxLength, inc, dec});
        }

        return maxLength;
    }
};