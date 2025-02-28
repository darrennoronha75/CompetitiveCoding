#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string>

using namespace std;

class Solution {
    public:
        string removeDigit(string number, char digit) {

            //Initialization - Need to implement logic to remove the digit in place
            //Key is to use C++ Lexicographic support

            //Code Incomplete

            return "asdad";

            
        }

    };

    int main() {

        //Taking Input
        string string1;
        getline(cin, string1);
        
        char digit1;
        cin>>digit1;

        //Create an instance of the Solution class
        Solution sol;
        
        cout<<sol.removeDigit(string1, digit1);
        
        return 0;
    }
    