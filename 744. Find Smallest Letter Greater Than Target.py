class Solution:
    def nextGreatestLetter(self, letters: List[str], target: str) -> str:
        letters=list(sorted(letters))
        if(letters[-1]<=target):
            return letters[0]
        else:
            for i in letters:
                if i>target:
                    return i
                    break
