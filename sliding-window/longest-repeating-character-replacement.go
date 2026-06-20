package slidingwindow

func characterReplacement(s string, k int) int {
	charArray := make([]int, 26)
	left := 0
	maxLen := 0
	maxCountChar := 0

	for right := 0; right < len(s); right++ {

		charArray[s[right]-'A']++

		if charArray[s[right]-'A'] > maxCountChar {
			maxCountChar = charArray[s[right]-'A']
		}

		windowLen := right - left + 1

		len := windowLen - maxCountChar

		if len > k {
			charArray[s[left]-'A']--
			left++
		}

		newWindowLen := right - left + 1
		if newWindowLen > maxLen {
			maxLen = newWindowLen
		}

	}
	return maxLen
}

// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         int left = 0, right= 0, maxlen = 0;

//         int countArr[256] = {0};

//         while (right < s.length()){
//             countArr[s[right]]++;

//             while (countArr[s[right]] > 1){
//                 countArr[s[left]]--;
//                 left++;
//             }
//             maxlen = max(maxlen, right - left + 1);
//             right++;
//         }
//         return maxlen;
//     }
// };
