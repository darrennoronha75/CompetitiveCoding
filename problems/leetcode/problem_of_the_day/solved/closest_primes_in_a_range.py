from math import sqrt
class Solution:

    def isPrime(self, num):
        #Sieve of Eratosthenes Faster
        if(num==2):
            return True
        else:
            for i in range(2, int(sqrt(num)+1)):
                if(num%i==0):
                    return False
            return True

    def isPrimeSieve(self, N):
        # Step 1: Create an array of size N+1, initially marking all as prime
        is_prime = [True] * (N + 1)
        is_prime[0] = is_prime[1] = False  # 0 and 1 are not prime

        # Step 2: Loop from 2 to sqrt(N)
        for num in range(2, int(sqrt(N)) + 1):
            if is_prime[num]:  # If num is still marked as prime
                # Step 3: Mark multiples of num as non-prime
                for multiple in range(num * num, N + 1, num):
                    is_prime[multiple] = False

        # Step 4: Collect all prime numbers
        primes = []
        for i in range(N + 1):
            if is_prime[i]:
                primes.append(i)

        return primes

    def closestPrimes(self, left: int, right: int) -> List[int]:

        ##Solution - Simplest Version First
        ##Implementing Simple Prime Number Finding Algorithm to find prime numbers in the given range
        prime_list = [num for num in self.isPrimeSieve(right) if num >=left]
        minimum_difference = 0
        minimum_first_index = 0

        # #Prime List Generation
        # for num in range(left, right+1):
        #     if(num==1):
        #         continue
        #     elif(self.isPrimeSieve(num)):
        #         prime_list.append(num)

        #Performing Evaluation on PrimeList
        ##Base Case
        if(len(prime_list)==1 or prime_list == [] or left==right):
            return [-1,-1]
        else:
            for i in range(0, len(prime_list)-1):
                current_difference = prime_list[i+1]-prime_list[i]
                if(minimum_difference == 0):
                    minimum_difference = current_difference
                elif(current_difference < minimum_difference):
                    minimum_difference = current_difference
                    minimum_first_index = i
                elif(current_difference == minimum_difference):
                    if(prime_list[i]<prime_list[minimum_first_index]):
                        minimum_first_index = i
            
            return [prime_list[minimum_first_index], prime_list[minimum_first_index+1]]


            

            
        
        