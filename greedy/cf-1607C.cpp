#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        
        vector<long long> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        
        sort(a.begin(), a.end());
        
        long long ans = a[0];
        
        for(int i = 1; i < n; i++){
            long long diff = a[i] - a[i-1];
            ans = max(ans, diff);
        }
        
        cout << ans << "\n";
    }
    
    return 0;
}
