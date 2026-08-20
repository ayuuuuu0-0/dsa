#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> resultArray(vector<int> &nums)
    {
        vector<int> arr1;
        vector<int> arr2;

        // Step 1: Place first element in arr1 and second element in arr2
        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);

        // Step 2: Iterate through remaining elements and apply condition
        for (int i = 2; i < nums.size(); ++i)
        {
            if (arr1.back() > arr2.back())
            {
                arr1.push_back(nums[i]);
            }
            else
            {
                arr2.push_back(nums[i]);
            }
        }

        // Step 3: Concatenate arr2 into arr1
        arr1.insert(arr1.end(), arr2.begin(), arr2.end());

        return arr1;
    }
};