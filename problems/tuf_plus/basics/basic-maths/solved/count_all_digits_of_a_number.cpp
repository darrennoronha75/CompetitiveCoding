#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

using namespace std;

class Solution {
    public:
        //Function to count digits of a given input number
        int countDigit(int n) {
            
            //Initilizations
            int count = 0;
            
            do{
                n = n/10;
                count = count + 1;
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
        
        cout<<sol.countDigit(N);
        
        return 0;
    }
    