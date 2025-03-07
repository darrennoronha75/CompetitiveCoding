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
    // Function to Rearrange elements by Sign
    vector<int> rearrangeArray(vector<int> &nums)
    {
        vector<int> result;

        return result;
    }
};

int main()
{

    // Taking Input
    int N;
    cin >> N;

    vector<int> nums(N);
    for (int i = 0; i < N; i++)
    {
        cin >> nums[i];
    }

    // Create an instance of the Solution class
    Solution sol;
    vector<int> result = sol.rearrangeArray(nums);
    for (int i = 0; i < size(result); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}
