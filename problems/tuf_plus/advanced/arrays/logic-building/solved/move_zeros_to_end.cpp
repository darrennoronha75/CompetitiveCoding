#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <vector>

using namespace std;

class Solution
{
public:
    void swap(vector<int> &nums, int pos1, int pos2)
    {
        int temp = nums[pos1];
        nums[pos1] = nums[pos2];
        nums[pos2] = temp;
    }

    // Function to move zeroes to the end of array - O(n) - One Pass
    // Trial - Logic - One pointer to track zeros from the start
    // One Pointer to track non=zero elements

    void moveZeroes(vector<int> &nums)
    {
        int worker_1 = 0;
        int worker_2 = 0;

        // Implement the two worker approach
        // Worker 1 - Moves forward till a zero is found
        // Worker 2 - Moves from current position till a non-zero element found
        while (worker_1 < size(nums))
        {
            // If Worker 1 encounters 1, enter conditional
            if (nums[worker_1] == 0)
            {
                // Worker 2 must walk along nums till a non_zero element is found
                while (nums[worker_2] == 0 && worker_2 < size(nums) - 1)
                {
                    worker_2 = worker_2 + 1;
                }
                swap(nums, worker_1, worker_2);
            }
            else
            {
                worker_2 = worker_2 + 1;
            }

            // Worker 1 - Moves one step ahead.
            worker_1 = worker_1 + 1;
        }
    }
};

int main()
{
    // Taking Input
    int N;
    // cout << "Enter the number of elements: ";
    cin >> N;

    vector<int> nums(N);
    // cout << "Enter the elements: ";
    for (int i = 0; i < N; i++)
    {
        cin >> nums[i];
    }

    // Create an instance of the Solution class
    Solution sol;
    sol.moveZeroes(nums);
    for (int i = 0; i < N; i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}

// Incorrect Approach - Swapping Elements to End
// Need to stop doing this as the order of elements need to be preserved.
// Function to move zeroes to the end of array - O(n^2)
//  void moveZeroes(vector<int>& nums){

//     //Approach - Declare Pointers
//     int zero_ptr = size(nums)-1;

//     while(zero_ptr >= 0){
//         if(nums[zero_ptr]==0){
//             int first_ptr = zero_ptr;
//             int second_ptr = first_ptr + 1;
//             while(first_ptr < second_ptr & second_ptr <= (size(nums)-1)){
//                 swap(nums, first_ptr, second_ptr);
//                 first_ptr = first_ptr + 1;
//                 second_ptr = second_ptr + 1;
//             };
//         }
//         zero_ptr = zero_ptr - 1;
//     }
//     }
