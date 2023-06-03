class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        for i in matrix:
            a=list(filter(lambda x: x==target,i))
            if (len(a)!=0):
                return True
                break
        return False
