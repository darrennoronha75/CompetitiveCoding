#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

using namespace std;

class Solution {
    public:
        //Function to count odd number of elements in array
        int countOdd(int arr[], int n) {
            
            //Initializations
            int count_odd = 0;

            //Iterative Loop
            for(int i = 0; i < n; i++){
                if(arr[i]%2==1){
                    count_odd +=1;
                }
            }
        
        return count_odd;
        }     
    };
    
    int main() {
        int n;
        // cout << "Enter the number of elements in the array: ";
        cin >> n;
    
        int arr[n];
        // cout << "Enter the elements of the array: ";
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
    
        // Create an instance of the Solution class
        Solution sol;
        
        cout << "Number of odd elements is:  " << sol.countOdd(arr, n) << endl;
        
        return 0;
    }
    