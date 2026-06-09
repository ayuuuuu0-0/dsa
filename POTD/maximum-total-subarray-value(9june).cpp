class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int max, min = nums[0];

        for (int i=0; i<nums.size(); i++){
           int num = nums[i];

            if ( num < min){
                min = num;
            }

            if ( num > max) {
                max = num;
            }

        }
        long long max_diff = max - min;
        return max_diff * k;
    }
};