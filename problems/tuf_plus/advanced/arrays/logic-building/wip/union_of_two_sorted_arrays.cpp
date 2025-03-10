#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <vector>

using namespace std;

class Solution
{
public:
    // Function to return union of two arrays
    vector<int> unionArray(vector<int> &nums1, vector<int> &nums2)
    {
        // Initializations
        vector<int> result;
        int nptr_1 = 0;
        int nptr_2 = 0;

        while (nptr_1 < size(nums1) && nptr_2 < size(nums2))
        {
            //Important - Avoiding unnecessary increments (#TIP)
            //We increment or addto result only when absolutely necessary.
            //For examply, we do not need to add to the results array if the latest element is equal to what can be entered
            //This allows us to handle two simultaneously sorted arrays that have different granularity of sorting.
        }

        // Append Remaining elements from nums1, nums2, if any
        while (nptr_1 < size(nums1))
        {
            result.push_back(nums1[nptr_1]);
        }
        while (nptr_2 < size(nums2))
        {
            result.push_back(nums2[nptr_2]);
        }

        return result;
    }
};

int main()
{
    // Taking Input - Array 1
    int N1;
    cin >> N1;

    vector<int> nums1(N1);
    for (int i = 0; i < N1; i++)
    {
        cin >> nums1[i];
    }

    // Taking Input - Array 2
    int N2;
    cin >> N2;

    vector<int> nums2(N2);
    for (int i = 0; i < N2; i++)
    {
        cin >> nums2[i];
    }

    // Create an instance of the Solution class
    Solution sol;
    vector<int> result = sol.unionArray(nums1, nums2);
    for (int i = 0; i < size(result); i++)
    {
        cout << result[i] << " ";
    }
    // return 0;
}
