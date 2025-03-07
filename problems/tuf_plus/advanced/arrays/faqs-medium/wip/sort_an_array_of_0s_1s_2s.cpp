#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
    public:

        //Function to sort zeros, ones and twos in order
        void sortZeroOneTwo(vector<int>& nums) {
        
            
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
        sol.sortZeroOneTwo(nums);
        for (int i = 0; i < N; i++) {
            cout << nums[i];
        }
        return 0;
    }
