class Solution:
    def numWays(self, words: List[str], target: str) -> int:
  
        m, n = len(words[0]),len(target)
        ans = [1]+ [0]*n
        words = list(map(Counter,zip(*map(list,words))))

        for word in words:
            for i in reversed(range(n)):
                ans[i+1] += ans[i] * word[target[i]] %1000000007

        return ans[n] %1000000007
