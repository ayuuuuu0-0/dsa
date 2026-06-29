#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

// first we find total sum, then we sort the array in decreasing order, now we create a var my_sum in my_sum we store the sum of the sorted number one by one, and we also increase the 

int main(){
    int n;
    cin >> n;

    vector<int> coins(n);
    int total_sum = 0;

    for(int i=0; i<n; i++){
        cin>>coins[i];
        total_sum += coins[i];
    }

    sort(coins.rbegin(), coins.rend());
    
    int mysum = 0;
    int coins_taken = 0;

    for(int i=0; i<n; i++){
        mysum += coins[i];
        coins_taken++;

        if(mysum > (total_sum - mysum)){
            break;
        }
    }
    cout << coins_taken << endl;
    return 0;
}