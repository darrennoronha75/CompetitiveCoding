#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
    public:

        //Function to find maximum sum Subarray.
        int maxSubArray(vector<int>& nums){
            
            //Initializations
            int max_sum = 0;
            int curr_sum = 0;
            int n_ptr = 0;

            while(n_ptr < size(nums)){

                //If including the current number reduces the current sum value, we don't include it.
                if(curr_sum + nums[n_ptr] < 0){
                    curr_sum = 0;
                }
                else{
                    curr_sum = curr_sum + nums[n_ptr];
                }

                //Update Max Sum
                if(curr_sum > max_sum){
                    max_sum = curr_sum;
                }

                n_ptr = n_ptr + 1;
            }
            if(max_sum ==0){
                return nums[0];
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

        // int target;
        // cin >> target;
        
        // Create an instance of the Solution class
        Solution sol;
        cout<<sol.maxSubArray(nums)<<endl;      
        return 0;
    }
