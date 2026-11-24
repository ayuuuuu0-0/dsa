#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxLength(vector<int>& nums) {
        int mx = 0, ml = 1;
        for (int x : nums) {
            mx = max(mx, x);
            ml = lcm(ml, x);
        }
        long long maxP = 1LL * ml * mx;
        int n = nums.size(), ans = 0;

        for (int i = 0; i < n; ++i) {
            long long p = 1, g = 0, l = 1;
            for (int j = i; j < n; ++j) {
                p *= nums[j];
                g = gcd(g, (long long)nums[j]);
                l = lcm(l, (long long)nums[j]);
                if (p == g * l) {
                    ans = max(ans, j - i + 1);
                }
                if (p > maxP) break;
            }
        }
        return ans;
    }
};#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxLength(vector<int>& nums) {
        int mx = 0, ml = 1;
        for (int x : nums) {
            mx = max(mx, x);
            ml = lcm(ml, x);
        }
        long long maxP = 1LL * ml * mx;
        int n = nums.size(), ans = 0;

        for (int i = 0; i < n; ++i) {
            long long p = 1, g = 0, l = 1;
            for (int j = i; j < n; ++j) {
                p *= nums[j];
                g = gcd(g, (long long)nums[j]);
                l = lcm(l, (long long)nums[j]);
                if (p == g * l) {
                    ans = max(ans, j - i + 1);
                }
                if (p > maxP) break;
            }
        }
        return ans;
    }
};