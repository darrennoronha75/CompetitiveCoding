## Array
## Hashset
# Dynamic Programming - Keeping track of max sum

class Solution:
    def lenLongestFibSubseq(self, arr) -> int:

        max_length = 0
        set_arr = set(arr)

        if(len(arr)==3):
            if(arr[0]+arr[1]==arr[2]):
                return 3
            else:
                return 0

        for i in range(0, len(arr)):

            for j in range(i+1, len(arr)):                
                #Check if sum present in set
                a = arr[i]
                b = arr[j]
                length = 2
                while(a+b in set_arr):
                    c = a+b
                    a,b = b,c
                    length += 1
                
                max_length = max(length, max_length)

        return max_length if max_length > 2 else 0
    


        