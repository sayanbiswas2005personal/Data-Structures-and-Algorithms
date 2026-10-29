def isIsomorphic(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        used = set()
        con = {}
        for i in range(len(s)):
            a = s[i]
            b = t[i]
            if a in con:
                if con[a] != b:
                    return False
            else:
                if b in used:
                    return False
                con[a] = b
                used.add(b)
        return True