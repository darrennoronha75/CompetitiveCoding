class Solution:

    # Brute Force Solution

    ## Things I am doing wrong
    ## String appending takes O n^2 - need to use the more efficient way.
    ## Using a DP Table here is more efficient, need to work out how to do that.

    def commonSubsequenceChecker(self, str1, str2, candidate):
        
        #Here, we recieve a candidate, and must check if str1, str2 can be constructed using the characters in the candidate.
        #If atleast one of str1 or str2 needs the character from candidate, we elect to keep it, else, we drop it.
        #If str1, str2, entirely consumed, we return the List - [super_sequence_candidate, True]
        #Else, we return the List [candidate, False]
        str1_ptr = 0
        str2_ptr = 0
        candidate_ptr = 0
        super_sequence_candidate = ""

        while(candidate_ptr <= len(candidate) - 1):
            if(str1[str1_ptr] == candidate[candidate_ptr] or str2[str2_ptr]==candidate[candidate_ptr]):
                if(str1[str1_ptr] == candidate[candidate_ptr] and str2[str2_ptr]!=candidate[candidate_ptr] ):
                    super_sequence_candidate = super_sequence_candidate + str1[str1_ptr]
                    str1_ptr =str1_ptr + 1
                elif(str1[str1_ptr] != candidate[candidate_ptr] and str2[str2_ptr]==candidate[candidate_ptr]):
                    super_sequence_candidate = super_sequence_candidate + str2[str2_ptr]
                    str2_ptr =str2_ptr + 1
                elif(str1[str1_ptr] == candidate[candidate_ptr] and str2[str2_ptr]==candidate[candidate_ptr]):
                    super_sequence_candidate = super_sequence_candidate + str2[str2_ptr]
                    str2_ptr =str2_ptr + 1
                    str1_ptr = str1_ptr + 1
            candidate_ptr = candidate_ptr + 1

        if(str1_ptr>=len(str1) and str2_ptr >= len(str2)):
            return [super_sequence_candidate, True]
        return [candidate, False]

    def shortestCommonSupersequence(self, str1: str, str2: str) -> str:

        #--- Logical Ideas START---#
        # Different Cases
        # 1 - (Starting) One String is a Subsequence of the other - check if smaller string, is contained in the larger string. If both are equal, candidate must be the first string (arbitrarily chosen)
        # 2 - (Limit) - Append one string to the other
        ## Components here are a checker and builder component
        
        #Order
        #1 - We first check if the larger string is actually the required subsequence
        
        #--- Logical Ideas END---#

        #Initializations
        larger_string = str1 if len(str1) > len(str2) else str2
        shorter_string = str1 if larger_string==str2 else str2
        candidate = larger_string
        candidate_left = ""
        candidate_right = ""

        #At each step, build the candidate
        #Option 1 - Build from the Left
        #Option 2 - Build from the Right

        #Building from the Right - Appending the smaller string forward style on the larger string
        current_string = larger_string
        shorter_string_ptr = 0

        while(shorter_string_ptr < len(shorter_string)  and len(current_string) <= len(larger_string) + len(shorter_string)):
            if(self.commonSubsequenceChecker(larger_string, shorter_string, current_string)[1] == True):
                candidate_left = self.commonSubsequenceChecker(larger_string, shorter_string, current_string)[0]
                break
            current_string += shorter_string[shorter_string_ptr]
            shorter_string_ptr = shorter_string_ptr + 1

        #Building from the Left - Appending the smaller string forward style on the larger string
        current_string = larger_string
        shorter_string_ptr = 0

        while(shorter_string_ptr < len(shorter_string)  and len(current_string) <= len(larger_string) + len(shorter_string)):
            if(self.commonSubsequenceChecker(larger_string, shorter_string, current_string)[1] == True):
                candidate_right = self.commonSubsequenceChecker(larger_string, shorter_string, current_string)[0]
                break
            current_string = shorter_string[len(shorter_string) - 1 - shorter_string_ptr] + current_string
            shorter_string_ptr = shorter_string_ptr + 1

        if(candidate_right == candidate_left):
            return candidate_right
        elif(len(candidate_right) > len(candidate_left)):
            return candidate_left
        else:
            return candidate_right
        



            
     



