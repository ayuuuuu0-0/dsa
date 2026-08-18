#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> freq;
        for (int x : nums) {
            freq[x]++;
        }

        // Case 1: k == 1
        // Element appears in exactly 1 subarray iff its total frequency is 1.
        if (k == 1) {
            int ans = -1;
            for (auto& [val, count] : freq) {
                if (count == 1) {
                    ans = max(ans, val);
                }
            }
            return ans;
        }

        // Case 2: k == n
        // Only 1 subarray exists, so every distinct element appears in exactly 1 subarray.
        if (k == n) {
            int ans = -1;
            for (int x : nums) {
                ans = max(ans, x);
            }
            return ans;
        }

        // Case 3: 1 < k < n
        // Only nums[0] and nums[n-1] can possibly belong to exactly one subarray of size k.
        int ans = -1;
        if (freq[nums[0]] == 1) {
            ans = max(ans, nums[0]);
        }
        if (freq[nums[n-1]] == 1) {
            ans = max(ans, nums[n-1]);
        }

        return ans;
    }
};