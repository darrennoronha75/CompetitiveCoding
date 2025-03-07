#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

using namespace std;

class Solution {
    public:
        //Function to return LCM for two numbers.
        int LCM(int n1, int n2) {  
            
            //Initializations
            int lcm = 0;
            bool lcm_found_flag = false;
            int iterator = 1;

            while(lcm_found_flag == false){
                if(iterator % n1 == 0 & iterator % n2 == 0){
                    lcm = iterator;
                    lcm_found_flag = true;
                }
                iterator = iterator + 1;
            };




            return lcm;
           
        }     
    };
    
    int main() {

        //Taking Input
        int N1, N2;
        cin>>N1>>N2;
        
        //Create an instance of the Solution class
        Solution sol;
        
        cout<<sol.LCM(N1, N2);
        
        return 0;
    }
    