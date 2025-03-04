class Solution:
    def pivotArray(self, nums, pivot: int):
        ##Solution which does not work in place
        n_ptr = 0
        less_than = []
        greater_than = []
        equal_to = []

        while(n_ptr < len(nums)):
            if(nums[n_ptr] < pivot):
                less_than.append(nums[n_ptr])
            elif(nums[n_ptr]> pivot):
                greater_than.append(nums[n_ptr])
            else:
                equal_to.append(nums[n_ptr])
            n_ptr = n_ptr + 1

        result = []
        for element in less_than:
            result.append(element)
        for element in equal_to:
            result.append(element)
        for element in greater_than:
            result.append(element)

        return result


    
        