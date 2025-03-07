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

        cout<<nums[pos1]<< " swapped with "<<nums[pos2]<<endl;
    }

    // Function to move zeroes to the end of array - O(n) - One Pass
    // Trial - Logic - One pointer to track zeros from the start
    // One Pointer to track non=zero elements

    int removeDuplicates(vector<int> &nums)
    {
        int worker_1 = 1;
        int worker_2 = 1;
        int maximum_yet = nums[0];

        // Implement the two worker approach - We know the array is sorted.
        // Worker 1 - Moves forward one place at a time. If we find a number that is equal than the maximum yet, we stop there. Initial Duplicate Found.
        // Worker 2 - Moves from current position till a number greater than the maximum_yet found. Swap once found. Then update the maximum yet.
        while (worker_1 < size(nums))
        {
            // If Worker 1 encounters the previous maximum, enter conditional
            if (nums[worker_1] == maximum_yet)
            {
                // Worker 2 must walk along nums till a number greater than maximum_yet is found.
                while (nums[worker_2] == maximum_yet && worker_2 < size(nums) - 1)
                {
                    worker_2 = worker_2 + 1;
                }
                maximum_yet = nums[worker_2];
                swap(nums, worker_1, worker_2);
            }
            else
            {
                maximum_yet = nums[worker_2];
                worker_2 = worker_2 + 1;
            }

            // Worker 1 - Moves one step ahead.
            worker_1 = worker_1 + 1;
            cout<<"Current Iteration "<<worker_1<<endl;
            for (int i = 0; i < size(nums); i++)
        {
            cout << nums[i] << " ";
        }
            cout<<endl;
            // maximum_yet = nums[worker_1]
        }

        for (int i = 0; i < size(nums); i++)
        {
            cout << nums[i] << " ";
        }
        cout<<endl;

        return 0;
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
    cout << sol.removeDuplicates(nums);
    // for (int i = 0; i < N; i++)
    // {
    //     cout << nums[i] << " ";
    // }
    // return 0;
}
