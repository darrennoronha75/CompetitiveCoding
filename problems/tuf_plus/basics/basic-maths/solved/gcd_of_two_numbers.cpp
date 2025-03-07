#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

using namespace std;

class Solution {
    public:
        //Function to return GCD for two numbers.
        int GCD(int n1, int n2) {  
            
            //Initializations
            int gcd = 1;

            for(int i = 1; i<=min(n1,n2);i++){
                if(n1 % i == 0 & n2 % i ==0){
                    gcd = i;
                }
            }


            return gcd;
           
        }     
    };
    
    int main() {

        //Taking Input
        int N1, N2;
        cin>>N1>>N2;
        
        //Create an instance of the Solution class
        Solution sol;
        
        cout<<sol.GCD(N1, N2);
        
        return 0;
    }
    