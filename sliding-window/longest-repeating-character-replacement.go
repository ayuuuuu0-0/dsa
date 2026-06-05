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
