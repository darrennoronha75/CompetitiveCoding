#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

using namespace std;

class Solution {
    public:
        //Function to calculate factorial of given input number
        int factorialRecursive(int n) {
            
            //Initilizations
            int value;
            
            //Recursive Implementation
            //Base case
            if(n==0 | n==1){
                value = 1;
            }
            else{
                value = factorialRecursive(n-1)*n;
            };
                   
        
        return value;
        }

        int factorial(int n) {
            
            //Initilizations
            int value;
            
            //Base Function
            value = factorialRecursive(n);                
        
        return value;
        }    
    };
    
    int main() {

        //Taking Input
        int N;
        cin>>N;
        
        //Create an instance of the Solution class
        Solution sol;
        
        cout<<sol.factorial(N);
        
        return 0;
    }
    