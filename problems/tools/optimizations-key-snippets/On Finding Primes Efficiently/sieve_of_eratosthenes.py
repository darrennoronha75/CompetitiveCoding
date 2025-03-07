from math import sqrt


class Solution:
    # Function applying Sieve of Eratosthenes to find the prime numbers in a given range
    def sieveOfEratosthenes(self, n):

        #Initialization
        isPrime = [True for i in range(0,n+1)]
        primes = []

        #Handing Base Cases
        isPrime[0] = False
        isPrime[1] = False

        #Managing Composite Numbers
        for num in range(2, int(sqrt(n)+1)):
            if(isPrime[num]):
                for i in range(num*num, n+1, num):
                    isPrime[i]= False

        # Marking the Prime Numbers upto N (Marked True)
        for num in range(0, len(isPrime)):
            if(isPrime[num]):
                primes.append(num)
        return primes
    
    ## Variant to Count Primes upto a given n
    def countPrimes(self, n: int) -> int:
        
        # Handle base cases: no primes if n is 0 or 1
        if n == 0 or n == 1:
            return 0

        # Initialization - Base Assumption: All numbers except 0 and 1 are prime
        isPrime = [True for i in range(0, n)]
        isPrime[0] = False  # 0 is not a prime number
        isPrime[1] = False  # 1 is not a prime number

        # Start marking non-prime numbers
        for num in range(2, int(sqrt(n) + 1)):
            if isPrime[num]:
                # Mark all multiples of num as non-prime
                for i in range(num * num, n, num):
                    isPrime[i] = False
        
        # Collect all prime numbers into a list
        primes = []
        for i in range(0, len(isPrime)):
            if isPrime[i]:
                primes.append(i)
        
        # Print the list of prime numbers - #DEBUG
        # print(primes)
        
        # Return the number of prime numbers found - Primes list can also be returned!
        return len(primes)