#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

using namespace std;

class Solution {
    public:

        int reverseNumber(int n) {
                
            //Initilizations
            int count = 0;
            int sum = 0;
            
            do{
                sum = sum*10 + n%10;
                n=n/10;
            }while(n > 0);
        
        
        return sum;
        }     
    
        //Function to check if given number is a palindrome
        bool isPalindrome(int n) {
            
            //Initializations
            bool palindromic_flag = false;

            //Strategy - we check if the reverse of the number is equal to the current number.
            //To this end, we reuse reverse_number.cpp logic from the previous problem.
            int reversed_number = reverseNumber(n);

            if(reversed_number == n){
                palindromic_flag = true;
            }
               
        
        
        return palindromic_flag;
        }     
    };
    
    int main() {

        //Taking Input
        int N;
        cin>>N;
        
        //Create an instance of the Solution class
        Solution sol;
        
        cout<<sol.isPalindrome(N);
        
        return 0;
    }
    