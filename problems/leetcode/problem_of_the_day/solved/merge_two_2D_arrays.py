class Solution:
    def mergeArrays(self, nums1: List[List[int]], nums2: List[List[int]]) -> List[List[int]]:
        
        ## Brute Force Solution
        ## If in nums2, perform the sum for the nums1 value, else add the nums 2 id entry
        ## We iterate through each nums1 value

        set_ids = set(pair[0] for pair in nums1)
        set_ids.update(pair[0] for pair in nums2)

        # Convert nums1 into a dictionary for easy lookup
        nums1_dict = {pair[0]: pair[1] for pair in nums1}
        nums2_dict = {pair[0]: pair[1] for pair in nums2}
        merged_array = []

        for id in set_ids:
            first_value_sum = nums1_dict.get(id, 0)  # Use .get() to avoid KeyError
            second_value_sum = nums2_dict.get(id, 0)
            
            net_value_sum = first_value_sum + second_value_sum
            merged_array.append([id, net_value_sum])

        return sorted(merged_array, key=lambda x: x[0])


            




    
        