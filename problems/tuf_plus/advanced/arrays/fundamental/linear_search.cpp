#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <vector>

using namespace std;

class Solution {
    public:
        //Function to check if target number in array or not.
        int linearSearch(vector<int>& nums, int target) {

            for(int i = 0; i<size(nums); i++){
                if(nums[i]==target){
                    return 1;
                }
            }

            return -1;
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
        
        cout << "Number Found in Array - " << sol.linearSearch(nums, target) << endl;
        
        return 0;
    }