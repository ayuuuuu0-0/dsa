package slidingwindow

func checkInclusion(s1 string, s2 string) bool {
	if len(s1) > len(s2) {
		return false
	}

	var charArrayA [26]int
	var charArrayB [26]int

	for i := 0; i < len(s1); i++ {
		charArrayA[s1[i]-'a']++
		charArrayB[s2[i]-'a']++
	}

	if charArrayA == charArrayB {
		return true
	}

	for right := len(s1); right < len(s2); right++ {
		charArrayB[s2[right]-'a']++
		charArrayB[s2[right-len(s1)]-'a']--
		if charArrayA == charArrayB {
			return true
		}
	}

	return false
}
