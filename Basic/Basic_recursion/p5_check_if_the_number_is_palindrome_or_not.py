def helper(self,s,low,high):
        if low >= high:
            return True
        if not s[low].isalnum():
            return self.helper(s,low+1,high)
        if not s[high].isalnum():
            return self.helper(s,low,high-1)
        if s[low].lower() != s[high].lower():
            return False
        return self.helper(s,low+1,high-1)
def isPalindrome(self, s: str) -> bool:
        return self.helper(s,0,len(s)-1)