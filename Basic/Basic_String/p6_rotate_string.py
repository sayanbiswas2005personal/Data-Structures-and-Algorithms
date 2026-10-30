def rotateString(self, s: str, goal: str) -> bool:
        if len(s) != len(goal):
            return False
        org = s + s
        if goal in org:
            return True
        return False