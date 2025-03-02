#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <vector>

using namespace std;

class Solution {
    public:
        //Function to rotate the Array to the Left by k places
        void rotateArray(vector<int>& nums, int k) {

            //Rotating Array to the left by one means switching the first and last element
            int first = 0;
            int second = 1;
            int counter = 0;

            if(size(nums)==1){
                return;
            }
            else{
                //After k rotations, we come to the same original array.
                k = k % nums.size();
                while(counter < k){
                    first = 0;
                    second = 1;
                    while(second < size(nums)){
                        int temp = nums[first];
                        nums[first] = nums[second];
                        nums[second] = temp;
    
                        first = first + 1;
                        second = second + 1;
                    }
                    counter = counter + 1;
                }
                
            }

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

        sol.rotateArray(nums, target);
        
        for (int i = 0; i < N; i++) {
            cout << nums[i]<<" ";
        }
        
        return 0;
    }