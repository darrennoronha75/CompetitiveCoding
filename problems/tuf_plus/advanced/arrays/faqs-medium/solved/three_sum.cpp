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
    // Function to return unique triplets that add up to zero (3-SUM)
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        // Initialization
        vector<vector<int>> result;

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
                int fixed_number = 0 - nums[i]; // Calculate the complement
                int left = i + 1;
                int right = nums.size() - 1;

                while (left < right)
                {
                    int sum = nums[left] + nums[right];
                    if (sum == fixed_number)
                    {
                        result.push_back({nums[i], nums[left], nums[right]});

                        // Move pointers to the next distinct elements - allows for consideration of the next distinct elements in each case.
                        while (left < right && nums[left] == nums[left + 1])
                            left++;
                        while (left < right && nums[right] == nums[right - 1])
                            right--;

                        left++;
                        right--;
                    }
                    else if (sum > fixed_number)
                    {
                        right--;
                    }
                    else
                    {
                        left++;
                    }
                }
            }
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
    vector<vector<int>> result = sol.threeSum(nums);
    for (int i = 0; i < size(result); i++)
    {
        for (int j = 0; j < size(result[i]); j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
