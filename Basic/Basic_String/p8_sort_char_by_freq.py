def frequencySort(self, s: str) -> str:
        freq = {}
        for i in range(len(s)):
            if s[i] in freq:
                freq[s[i]] += 1
            else:
                freq[s[i]] = 1
        sorted_freq = sorted(freq.items(), key = lambda x : x[1], reverse = True)
        ans = ""
        for ele,frequency in sorted_freq:
            ans += ele * frequency
        return ans