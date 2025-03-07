#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <vector>

using namespace std;

class Solution {
    public:
        //Function to return divisors for a number.
        vector<int> divisors(int n) {  
            
            //Initializations
            vector<int> result;

            //Iterating from 1 to n
            for(int i = 1; i <= n; i++){
                if(n%i == 0){
                    result.push_back(i);
                }
            }


        
           return result;
        }     
    };
    
    int main() {

        //Taking Input
        int n;
        cin>>n;
        
        //Create an instance of the Solution class
        Solution sol;
        
       
        /* Function call to find 
        all divisors of n */
        vector<int> ans = sol.divisors(n);
        
        cout << "The divisors of " << n << " are: ";
        for(int i=0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
            
        return 0;
    }
    