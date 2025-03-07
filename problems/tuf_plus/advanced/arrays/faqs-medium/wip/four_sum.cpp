#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution
{
public:
    // Function to return indices that add up to target (4-SUM)
    vector<vector<int>> fourSum(vector<int> &nums, int target)
    {

        // Initialization
        vector<vector<int>> result;

        // Approach
        // Step 1 - Sort the array
        sort(nums.begin(), nums.end());
        // Step 2 - Iterate through the array, from start to end - Building an O(n3) solution.
        for(int i = 0; i <size(nums); i++){
            
            //Initialization
            int fixed_number = nums[i]; //By Fixing the Number, we 


        }
        return result;
    }
};

int main()
{
    // Taking Target Input
    int target;
    cin >> target;

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
    vector<vector<int>> result = sol.fourSum(nums, target);
    for (int i = 0; i < size(result); i++)
    {
        for (int j = 0; j < size(result[i]; i++))
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

// 7
// 6
// 1 -2 3 6 7 9

