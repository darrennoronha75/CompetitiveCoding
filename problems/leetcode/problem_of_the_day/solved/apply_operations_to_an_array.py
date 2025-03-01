##Inefficient Solution

class Solution:
    def applyOperations(self, nums: List[int]) -> List[int]:
        for i in range(0, len(nums)-1):
            if(nums[i]==nums[i+1]):
                nums[i] = nums[i]*2
                nums[i+1] = 0
        
        print(nums)

        for i in range(0, len(nums)):
            if(nums[i]==0):
                i_ptr = i
                while(i_ptr < len(nums)):
                    if(nums[i_ptr]!=0):
                        nums[i], nums[i_ptr] = nums[i_ptr], nums[i]
                        break
                    i_ptr = i_ptr + 1   

        
        return nums
            


        