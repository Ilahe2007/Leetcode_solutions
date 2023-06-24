class Solution:
    def firstPalindrome(self, words: List[str]) -> str:
        s=""
        for i in words:
            a=list(reversed(i))
            if(''.join(a)==i):
                s+=i
                break
        return s
