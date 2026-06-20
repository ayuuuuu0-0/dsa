class Solution {
public:
int maxScore(vector<int>& cardPoints, int k) {
    int currentSum = 0;

    for (int i=0; i<k; i++){
       currentSum += cardPoints[i]; 
    }

    int left = k-1;
    int right = n-1;
    int maxSum = currentSum;

    while (left >= 0){
        currentSum = currentSum - cardPoints[left] + cardPoints[right];
        maxSum = max(maxSum, currentSum);
        left--;
        right--;
    }

    return maxSum;
}
}