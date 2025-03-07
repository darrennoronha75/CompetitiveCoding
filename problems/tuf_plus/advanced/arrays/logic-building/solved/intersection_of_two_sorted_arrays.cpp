#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <vector>

using namespace std;

class Solution
{
public:
    // Function to return intersection of two arrays
    vector<int> intersectionArray(vector<int> &nums1, vector<int> &nums2)
    {

        // Initializations
        vector<int> result;
        int nptr_1 = 0;
        int nptr_2 = 0;

        while (nptr_1 < size(nums1) && nptr_2 < size(nums2))
        {
            // If nptr_1 and 2 are both pointing to the same number, we pushback and increase.
            if (nums1[nptr_1] == nums2[nptr_2])
            {
                result.push_back(nums1[nptr_1]);
                nptr_1 = nptr_1 + 1;
                nptr_2 = nptr_2 + 1;
            }
            else if (nums1[nptr_1] < nums2[nptr_2])
            {
                nptr_1 = nptr_1 + 1;
            }
            else
            {
                nptr_2 = nptr_2 + 1;
            }
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
    vector<int> result = sol.intersectionArray(nums1, nums2);
    for (int i = 0; i < size(result); i++)
    {
        cout << result[i] << " ";
    }
    // return 0;
}
