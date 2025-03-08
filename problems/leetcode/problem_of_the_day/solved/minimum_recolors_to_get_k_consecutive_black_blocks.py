class Solution:
    def minimumRecolors(self, blocks: str, k: int) -> int:
        #We build a sliding window of size k, and slide it at each iteration across the board
        #The window with the least number of white blocks is automatically the one that requires the minimum Recolors
        s_ptr = 0
        back_ptr = 0
        count = 0


        #Building Initial Window
        while(s_ptr < k):
            if(blocks[s_ptr]=='W'):
                count = count+1 
            s_ptr = s_ptr + 1
        
        min_count = count

        #Sliding Window Through the rest of the array
        while(s_ptr < len(blocks)):
            if(blocks[back_ptr]=='W'):
                count = count-1 
            if(blocks[s_ptr]=='W'):
                count = count+1
            if(count < min_count):
                min_count = count 
            back_ptr = back_ptr + 1
            s_ptr = s_ptr + 1

        return min_count

