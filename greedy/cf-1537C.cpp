#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> p(n + 1); // 1-indexed, p[1]=bottom, p[n]=top
        vector<int> position(n + 1); // position[value] = index in array
        
        for (int i = 1; i <= n; i++) {
            cin >> p[i];
            position[p[i]] = i;
        }
        
        // We'll collect the result block by block
        // result[0] = bottom, result[n-1] = top
        vector<int> result;
        result.reserve(n);
        
        int rightBoundary = n;      // current right end of unprocessed portion
        int currentMax = n;         // next maximum to look for
        
        // Find blocks greedily from bottom to top
        // Each iteration: find where currentMax is, 
        // take block from that position to rightBoundary
        while (rightBoundary >= 1) {
            // Find the maximum value in p[1..rightBoundary]
            // which is simply 'currentMax' (we go from n down to 1)
            // But we need currentMax to be within [1, rightBoundary]
            
            // Find largest value that is at position <= rightBoundary
            while (position[currentMax] > rightBoundary) {
                currentMax--; // this value is already in a previous block (to the right)
            }
            
            int blockStart = position[currentMax];
            
            // Add block [blockStart .. rightBoundary] to result
            for (int i = blockStart; i <= rightBoundary; i++) {
                result.push_back(p[i]);
            }
            
            rightBoundary = blockStart - 1;
            currentMax--;
        }
        
        // Print result (bottom to top)
        for (int i = 0; i < n; i++) {
            cout << result[i];
            if (i < n - 1) cout << ' ';
        }
        cout << '\n';
    }
    
    return 0;
}
