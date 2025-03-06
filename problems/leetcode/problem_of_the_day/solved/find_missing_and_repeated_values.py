class Solution:
    def findMissingAndRepeatedValues(self, grid: List[List[int]]) -> List[int]:
        
        ## Initializations
        num_set = {}
        
        for list_nums in grid:
            for element in list_nums:
                num_set[element] = num_set.get(element, 0) + 1
        
        b = {key for key, value in num_set.items() if value == 2}.pop()
        
        #Second pass through num_set but with n*n
        for i in range(1, len(grid)*len(grid) + 1):
            num_set[i] = num_set.get(i, 0)
        
        a = {key for key, value in num_set.items() if value == 0}.pop()

        return [b, a]