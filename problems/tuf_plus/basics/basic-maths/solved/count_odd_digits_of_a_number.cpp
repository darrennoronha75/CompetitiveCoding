#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

using namespace std;

class Solution {
    public:
        //Function to count odd digits of a given input number
        int countOddDigit(int n) {
            
            //Initilizations
            int count = 0;
            
            do{
                if(n%2==1){
                count = count + 1;
                }
                n = n/10;
            }while(n > 0);
        
        
        return count;
        }     
    };
    
    int main() {

        //Taking Input
        int N;
        cin>>N;
        
        //Create an instance of the Solution class
        Solution sol;
        
        cout<<sol.countOddDigit(N);
        
        return 0;
    }
    