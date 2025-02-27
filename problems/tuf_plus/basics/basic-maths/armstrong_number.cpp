#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

using namespace std;

class Solution {
    public:

        int countDigit(int n) {
                
            //Initilizations
            int count = 0;
            
            do{
                n = n/10;
                count = count + 1;
            }while(n > 0);
        
        
        return count;
        }     

        //Function to check if a given number is armstrong
        bool isArmstrong(int n) {
            
            bool armstrong_flag = false;
            int num_copy = n;
                   
            //We reuse the count all digits function for a number
            int count_digit = countDigit(n);
            int sum = 0;

            do{
                sum = sum + pow((n%10), count_digit);
                n = n/10;
            }while(n > 0);

            if(sum == num_copy){
                armstrong_flag = true;
            }
            
        return armstrong_flag;
        }
         
    };
    
    int main() {

        //Taking Input
        int N;
        cin>>N;
        
        //Create an instance of the Solution class
        Solution sol;
        
        cout<<sol.isArmstrong(N);
        
        return 0;
    }
    