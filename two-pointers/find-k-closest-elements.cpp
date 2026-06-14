class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int right = arr.size() - 1;
        int left = 0;

        while (right - left + 1 > k){
            if(abs(arr[left] - x) <= abs(arr[right] - x)){
                right--;
            }else{
                left++;
            }
        }
        return vector<int>(arr.begin()+left, arr.begin()+right + 1 );
    }
};