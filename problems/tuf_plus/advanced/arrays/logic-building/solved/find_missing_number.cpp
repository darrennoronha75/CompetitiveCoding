#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <vector>

using namespace std;

class Solution
{
public:   

    // Function to find the missing Number
    int missingNumber(vector<int>& nums){
        int sum = 0;
        for(int i = 0; i < size(nums); i++){    
            sum = sum + nums[i];
        }
        int n = size(nums);

        return n*(n+1)/2 - sum;
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
    cout << sol.missingNumber(nums);
    // for (int i = 0; i < N; i++)
    // {
    //     cout << nums[i] << " ";
    // }
    // return 0;
}
