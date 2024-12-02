package main

func canConstruct(ransomNote string, magazine string) bool {
	var hash [26]int

	for _, value := range magazine {
		hash[value-'a']++
	}

	for _, value := range ransomNote {
		hash[value-'a']--
		if hash[value-'a'] < 0 {
			return false
		}
	}

	return true
}

func isIsomorphic(s string, t string) bool {
	l := len(s)
	hash1, hash2 := make(map[byte]byte, l), make(map[byte]byte, l)

	for index, value := range s {
		if v, ok := hash1[byte(value)-'a']; ok {
			if v != t[index] {
				println(v, t[index])
				return false
			}
		} else {
			hash1[byte(value)-'a'] = t[index]
		}

		if v, ok := hash2[t[index]-'a']; ok {
			if v != byte(value) {
				return false
			}
		} else {
			hash2[t[index]-'a'] = byte(value)
		}
	}

	return true
}
