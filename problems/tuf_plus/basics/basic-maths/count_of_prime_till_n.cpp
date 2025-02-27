#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

using namespace std;

class Solution {
    public:
        //Function to count the prime numbers upto given input
        //Sieve of Eras - Implementation - C++
        int primeUptoN(int n) {
            
            //Concept - we check each time upto the square root of the number
            int count = 0;
            double sqrt_n = sqrt(n);

            for (int i = 2; i <= n; i++){
                bool isPrime = true;
                for (int j = 2; j <= sqrt(i); j++){
                    if (i % j == 0){
                        //We don't continue at this point.
                        isPrime = false;
                        break;
                    }
                }
                if (isPrime){
                    count++;
                }
            }      
            
            
            return count;
            }    
    };
    
    int main() {

        //Taking Input
        int N;
        cin>>N;
        
        //Create an instance of the Solution class
        Solution sol;
        
        cout<<sol.primeUptoN(N);
        
        return 0;
    }
    