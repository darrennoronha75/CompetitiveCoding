#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

// ##Expected Output - 2

class Solution
{
public:
    // Function to return indices that add up to target (4-SUM)
    int threeSumClosest(vector<int> &nums, int target)
    {
        // Initialization
        int closest_sum = INT_MIN;
        int max_difference = nums[size(nums) - 1] - nums[0];
        // Step 1 - Sort the array
        sort(nums.begin(), nums.end());

        // Step 2 - Iterate through the array, from start to end
        for (int i = 0; i < nums.size(); i++)
        {
            // Skip duplicate elements for the fixed element
            if (i > 0 && nums[i] == nums[i - 1])
            {
                continue;
            }
            else
            {
                // Fixing the Number
                int fixed_number = target - nums[i]; // Calculate the complement
                int left = i + 1;
                int right = nums.size() - 1;

                while (left < right)
                {
                    // Check the Current Sum
                    int current_sum = nums[left] + nums[right] + nums[i];
                    int current_difference = target - current_sum;

                    if (current_difference < max_difference)
                    {
                        closest_sum = current_sum;
                        max_difference = current_difference;
                    }

                    while (left < right && nums[left] == nums[left + 1])
                    {
                        left++;
                    }
                    while (left < right && nums[right] == nums[right - 1])
                    {
                        right--;
                    };
                    left++;
                    right--;
                }
            }
        }

        return closest_sum;
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
    cout << sol.threeSumClosest(nums, target) << endl;
    return 0;
}


    