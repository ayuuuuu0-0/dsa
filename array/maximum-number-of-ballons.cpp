class Solution {
public:
    int maxNumberOfBalloons(string text) {
        // 1. Count frequencies of all characters in the text
        unordered_map<char, int> counts;
        for (char c : text) {
            counts[c]++;
        }
        
        // 2. Identify how many copies of each character are available
        int b = counts['b'];
        int a = counts['a'];
        int l = counts['l'] / 2; // Requires 2 'l's per word
        int o = counts['o'] / 2; // Requires 2 'o's per word
        int n = counts['n'] / 1;
        
        // 3. The bottleneck character dictates the maximum words possible
        return min({b, a, l, o, n});
    }
};