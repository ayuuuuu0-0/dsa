#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int t;
  cin >> t;
  
  while(t--){
  int n;
  cin >> n;
  
  
  vector<int>nums(n);
  
  for (int i=0; i<n; i++){
      cin >> nums[i];
  }
  
  sort(nums.begin(), nums.end());
  

  int groups = 0;
  int groupSize = 0;
  for(int i=0; i<n; i++){
      groupSize++;
    if (groupSize >= nums[i]){
          groups++;
          groupSize = 0;
      }
  }
  cout << groups << "\n";
  }
}