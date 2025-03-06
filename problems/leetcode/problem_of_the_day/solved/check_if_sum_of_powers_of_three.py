class Solution:        

    def checkPowersOfThree(self, n: int) -> bool:
        ## A Recursive Solution may lead to a stack overflow.
        ##Brute Force Solution may involve checking every combination of power 3 values.
        ##One approach, keep increasing powers of n,  till the number of powers values increases the actual value for a single value.
        while(n > 0):
            remainder = n % 3
            if(remainder == 2):
                return False
            
            n = n//3
        
        
        return True
            