#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

using namespace std;

class Solution {
    public:
        //Function to count digits of a given input number
        bool arraySortedOrNot(int arr[], int n) {

            if(n==1){
                return true;
            }
            else{
                for(int i = 0; i < n-1; i++){
                    if(arr[i]>arr[i+1]){
                        return false;
                    }
                }
            }
            

            return true;
        }     
    };
    
    int main()  {
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
        
        cout << "Array Sorted - " << sol.arraySortedOrNot(arr, n) << endl;
        
        return 0;
    }
    