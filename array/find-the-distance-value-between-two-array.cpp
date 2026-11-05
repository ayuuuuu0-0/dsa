#include <vector>
#include <cmath>

using namespace std;

class Solution
{
public:
    int findTheDistanceValue(vector<int> &arr1, vector<int> &arr2, int d)
    {
        int distanceValue = 0;

        for (int i = 0; i < arr1.size(); ++i)
        {
            bool isValid = true;
            for (int j = 0; j < arr2.size(); ++j)
            {
                if (abs(arr1[i] - arr2[j]) <= d)
                {
                    isValid = false;
                    break; // Violation found, no need to check remaining elements in arr2
                }
            }
            if (isValid)
            {
                distanceValue++;
            }
        }

        return distanceValue;
    }
};