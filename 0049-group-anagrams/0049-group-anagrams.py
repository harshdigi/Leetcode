class Solution(object):
    def groupAnagrams(self, strs):
        group_anagram = {}
        for s in strs:
            sorted_s = "".join(sorted(s))
            if group_anagram.get(sorted_s,None) is not None:
                group_anagram[sorted_s].append(s)
            else:
                group_anagram[sorted_s] = []
                group_anagram[sorted_s].append(s)
            
        return list(group_anagram.values())
        