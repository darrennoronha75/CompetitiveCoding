#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

using namespace std;

class Solution {
    public:
        //Function to check if a given number is perfect
        bool isPerfect(int n) {
            
            //Initializations
            bool perfect_flag = false;
            int num_copy = n;
            int sum = 0;
            int halfway_point = n/2;

            //We can check upto the halfway point for the number
            for(int i=1; i<=halfway_point; i++){
                if(n%i == 0){
                    sum = sum + i;
                }
            }                   
           
            //Checking if recreated number is equal.
            if(sum == num_copy){
                perfect_flag = true;
            }
            
        return perfect_flag;
        }
         
    };
    
    int main() {

        //Taking Input
        int N;
        cin>>N;
        
        //Create an instance of the Solution class
        Solution sol;
        
        cout<<sol.isPerfect(N);
        
        return 0;
    }
    