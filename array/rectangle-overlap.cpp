#include <vector>

using namespace std;

class Solution
{
public:
    bool isRectangleOverlap(vector<int> &rec1, vector<int> &rec2)
    {
        // Check if there is NO overlap along X-axis or Y-axis
        bool noOverlapX = (rec1[2] <= rec2[0]) || (rec1[0] >= rec2[2]);
        bool noOverlapY = (rec1[3] <= rec2[1]) || (rec1[1] >= rec2[3]);

        // Overlap exists if they overlap along BOTH axes
        return !noOverlapX && !noOverlapY;
    }
};