class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.length();

        if (t.length() > n){
            return "";
        }

        unordered_map<char, int> mp;

        for (int i=0; i < t.length(); i++){
            char ch = t[i]; // t ko char me daal diya
            mp[ch]++;
        }

        int requiredCount = t.length(), start_i =0, minWindowSize=INT_MAX, j=0, i=0;

        // logic starts

        while (j < n){
           char ch = s[j];
           if (mp[ch] > 0)
            requiredCount--;
           
            mp[ch]--;

           while (requiredCount == 0){
           int currWindowSize = j - i + 1;

           if (currWindowSize < minWindowSize){
            minWindowSize = currWindowSize;
            start_i = i;
           }
           mp[s[i]]++;

           if (mp[s[i]] > 0){
           requiredCount++;
           }
           i++;
           }
           j++;
        }
        return (minWindowSize == INT_MAX) ? "" : s.substr(start_i, minWindowSize);
    }
};