#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

using namespace std;

class Solution {
    public:
        //Function to return largest digit of a given number
        int largestDigit(int n) {
            
            //Initilizations
            int largest_digit = 0, current_digit;
            
            do{
                current_digit = n % 10;
                largest_digit = max(current_digit, largest_digit);                
                n=n/10;
            }while(n > 0);
        
        
        return largest_digit;
        }     
    };
    
    int main() {

        //Taking Input
        int N;
        cin>>N;
        
        //Create an instance of the Solution class
        Solution sol;
        
        cout<<sol.largestDigit(N);
        
        return 0;
    }
    