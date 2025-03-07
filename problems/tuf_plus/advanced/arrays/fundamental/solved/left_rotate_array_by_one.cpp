#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <vector>

using namespace std;

class Solution {
    public:
        //Function to rotate the Array to the Left by One
        void rotateArrayByOne(vector<int>& nums) {

            //Rotating Array to the left by one means switching the first and last element
            int first = 0;
            int second = 1;

            if(size(nums)==1){
                return;
            }
            else{
                while(second < size(nums)){
                    int temp = nums[first];
                    nums[first] = nums[second];
                    nums[second] = temp;

                    first = first + 1;
                    second = second + 1;
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

        sol.rotateArrayByOne(nums);
        
        for (int i = 0; i < N; i++) {
            cout << nums[i]<<" ";
        }
        
        return 0;
    }