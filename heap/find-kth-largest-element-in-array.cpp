class Solution {
    public: int findKthLargestElement(vector<int>&nums, int k){

        priority_queue<int, vector<int>, greater<int>> min_heap;

        for(int i=0; i<nums.size(); i++){
            int current = nums[i];
            min_heap.push(current);

            if(min_heap.size() > k){
                min_heap.pop();
            }
        }
        return min_heap.top();
    }
};