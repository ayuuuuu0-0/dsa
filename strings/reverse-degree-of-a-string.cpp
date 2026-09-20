#include <string>

using namespace std;

class Solution
{
public:
    int reverseDegree(string s)
    {
        int totalDegree = 0;

        for (int i = 0; i < s.length(); ++i)
        {
            // Reverse rank: 'a' -> 26, 'b' -> 25, ..., 'z' -> 1
            int reverseRank = 26 - (s[i] - 'a');

            // 1-based index weight
            totalDegree += reverseRank * (i + 1);
        }

        return totalDegree;
    }
};