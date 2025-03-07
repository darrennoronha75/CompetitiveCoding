#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <vector>

using namespace std;

class Solution {
    public:
        //Function to check if target number in array or not.
        int secondLargestElement(vector<int>& nums) {
            int largest = INT_MIN;
            int second_largest = largest;
            

            for(int i = 0; i<size(nums); i++){
                
                //If number is greater than Largest
                //Update the largest number
                if(nums[i] > largest){
                    second_largest = largest;
                    largest = nums[i];
                }
                //If number is smaller than largest but greater than second_largest
                //Update second_largest
                if(nums[i] < largest & nums[i] >= second_largest){
                    second_largest = nums[i];
                }


            }

            if(largest == second_largest | second_largest == INT_MIN){
                return -1;
            }

            return second_largest;
        }     
    };
    
    int main()  {
        // Taking Input
        int N;
        // cout << "Enter the number of elements: ";
        cin >> N;
        
        vector<int> nums(N);
        // cout << "Enter the elements: ";
        for (int i = 0; i < N; i++) {
            cin >> nums[i];
        }

        int target;
        cin >> target;
        
        // Create an instance of the Solution class
        Solution sol;
        
        cout << "Second Largest Number in Array is - " << sol.secondLargestElement(nums) << endl;
        
        return 0;
    }