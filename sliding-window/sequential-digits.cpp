#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> result;
        string sample = "123456789";
        
        int min_len = to_string(low).length();
        int max_len = to_string(high).length();
        
        // Iterate through all possible lengths of the sequential numbers
        for (int len = min_len; len <= max_len; ++len) {
            // Slide a window of size 'len' across the sample string
            for (int start = 0; start <= sample.length() - len; ++start) {
                string sub = sample.substr(start, len);
                int num = stoi(sub);
                
                // If the generated number is within the range, save it
                if (num >= low && num <= high) {
                    result.push_back(num);
                }
            }
        }
        
        return result;
    }
};