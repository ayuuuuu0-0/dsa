#include <vector>

using namespace std;

class Solution
{
public:
    bool uniformArray(vector<int> &nums)
    {
        // It is always possible to make all elements even as long as nums is non-empty.
        return !nums.empty();
    }
};