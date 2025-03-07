#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

using namespace std;

class Solution {
    public:
        //Function to reverse a given number
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
    };
    
    int main() {

        //Taking Input
        int N;
        cin>>N;
        
        //Create an instance of the Solution class
        Solution sol;
        
        cout<<sol.reverseNumber(N);
        
        return 0;
    }
    