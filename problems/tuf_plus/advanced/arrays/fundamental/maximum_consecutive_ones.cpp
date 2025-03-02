//Kadane Algorithm

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <vector>

using namespace std;

class Solution {
    public:
        //Function to find Maximum Number of Consecutive Ones in the Array
        int findMaxConsecutiveOnes(vector<int>& nums) {
            
            //Initializations
            int current_sum = 0;
            int max_sum = 0;

            //We can apply a variation of Kadanes algorithm here to see the Maximum Subarray Sum.
            //If the current_subarray_sum doesn't change, we need to reset the current_sum to zero
            for(int i = 0; i < size(nums); i++){
                
                if(current_sum + nums[i] == current_sum){
                    current_sum = 0;
                }
                else{
                    current_sum = current_sum + nums[i];
                }                
                
                //Update Maximum Sum
                if(current_sum > max_sum){
                    max_sum = current_sum;
                }
            }

            return max_sum;
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
        
        cout << "Number of Maximum Consecutive Ones is " << sol.findMaxConsecutiveOnes(nums) << endl;
        
        return 0;
    }