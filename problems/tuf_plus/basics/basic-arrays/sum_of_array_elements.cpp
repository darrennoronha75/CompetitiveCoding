#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

using namespace std;

class Solution {
    public:
        //Function to sum elements in an array
        int sum(int arr[], int n) {
            
            //Initializations
            int sum = 0;

            //Iterative Loop
            for(int i = 0; i < n; i++){
                sum += arr[i];
            }
        
        return sum;
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
        
        cout << "Sum of array elements: " << sol.sum(arr, n) << endl;
        
        return 0;
    }
    