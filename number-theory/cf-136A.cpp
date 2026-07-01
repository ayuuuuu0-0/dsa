#include <iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    vector<int> giver_of(n+1);

    for (size_t i=1; i<=n; i++){
        int receiver;
        cin>>receiver;
        giver_of[receiver] = i;
    }
    for(size_t i=1; i<=n; i++){
        cout<<giver_of[i]<<" ";
    }
    cout << endl;
return 0;
}