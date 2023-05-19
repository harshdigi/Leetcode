class Solution(object):
    def isAnagram(self, s, t):
        sorted_s = sorted(s)
        sorted_t = sorted(t)
        if sorted_t == sorted_s:
            return True
        return False
        