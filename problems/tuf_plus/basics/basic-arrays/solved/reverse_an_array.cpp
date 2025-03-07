#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

using namespace std;

class Solution {
    public:
        //Function to reverse an array
        void reverse(int arr[], int n) {
            
            //Initilizations
            int left=0;
            int right=n-1;
            int temp;
            
            while(left <= right){
                temp = arr[left];
                arr[left] = arr[right];
                arr[right] = temp;

                left = left + 1;
                right = right - 1;
            }
    
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
        sol.reverse(arr, n);
        
        for (int i = 0; i < n; i++) {
            cout << arr[i] <<" ";
        }
        
        return 0;
    }
    