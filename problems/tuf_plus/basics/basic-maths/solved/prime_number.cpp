#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

using namespace std;

class Solution {
    public:
        //Function to check if given number is Prime
        bool isPrime(int n) {
            
            //Initializations
            bool prime_flag = true;

            //Strategy - Brute Force Check
            //We will check upto the square root for the number

            if(n==2){
                prime_flag = true;
            }
            else if(n==1){
                prime_flag = false;
            }
            else{
                for(int i = 2; i <= sqrt(n); i++){

                    if(n%i == 0){
                        prime_flag = false;
                    }   
    
                    if(prime_flag == false){
                        break;
                    }
                }
    
            };
            
        
        
        return prime_flag;
        }     
    };
    
    int main() {

        //Taking Input
        int N;
        cin>>N;
        
        //Create an instance of the Solution class
        Solution sol;
        
        cout<<sol.isPrime(N);
        
        return 0;
    }
    