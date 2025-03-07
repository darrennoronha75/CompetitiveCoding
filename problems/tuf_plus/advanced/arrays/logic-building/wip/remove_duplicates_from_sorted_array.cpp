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

    // Function to remove Duplicates from the sorted array.
    int removeDuplicates(vector<int> &nums)
    {
        int worker_1 = 1;
        int worker_2 = 1;
        int maximum_yet = nums[0];
     

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

//Failed Approach
//   // Implement the two worker approach - We know the array is sorted.
        // Worker 1 - Moves forward one place at a time. If we find a number that is equal than the maximum yet, we stop there. Initial Duplicate Found.
        // Worker 2 - Moves from current position till a number greater than the maximum_yet found. Swap once found. Then update the maximum yet. The maximum_yet is the value at worker_1 post swap.
        //After Trying to implement this - got the insight that this is overcomplicating the problem.
        //Chatgpt advocates for an insert pointer paradigm, another pointer simply detects the non-unique element, and we swap it, the value of insert_ptr at the end to be returned.
