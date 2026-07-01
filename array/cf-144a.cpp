#include <iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> nums(n);
    int min_val=101;
    int max_val=0;
    int max_idx = 0;
    int min_idx = 0;

    for(size_t i=0; i<n; i++){
        cin>>nums[i];

        if(nums[i] > max_val){
            max_val = nums[i];
            max_idx = i;
        }

        if(nums[i] <= min_val){
            min_val = nums[i];
            min_idx = i;
        }
    }

        int target_moves =0;

        target_moves = max_idx + (n-1-min_idx);

        if (max_idx > min_idx){
            target_moves--;
        }

    cout << target_moves << endl;

    return 0;
}