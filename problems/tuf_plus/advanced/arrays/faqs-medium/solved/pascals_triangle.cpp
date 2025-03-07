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
    vector<vector<int>> pascalTriangle(int numRows)
    {
        // Initialization
        vector<vector<int>> result;

        // Step 1 - Initialization

        if (numRows >= 1)
        {
            result.push_back({1});

            // Manage the Base Case if numRows is given as 1
            if (numRows == 1)
            {
                return result;
            }
        }

        if (numRows >= 2)
        {
            result.push_back({1, 1});

            // Manage the Base Case if numRows is given as 2
            if (numRows == 2)
            {
                return result;
            }
        }

        // Managing the General Case (numRows > 3 )
        for (int i = 3; i < numRows + 1; i++)
        {

            // Initialization
            vector<int> pascal_row;
            vector<int> previous_row = result.back();

            // Constructing the Pascal Row
            pascal_row.push_back(1);
            for (int j = 0; j < size(previous_row) - 1; j++)
            {
                pascal_row.push_back(previous_row[j] + previous_row[j + 1]);
            }
            pascal_row.push_back(1);

            // Push Back the Constructed Pascal Row
            result.push_back(pascal_row);
        }

        return result;
    }
};

int main()
{
    // Taking Input
    int N;
    cin >> N;

    // Create an instance of the Solution class
    Solution sol;
    vector<vector<int>> result = sol.pascalTriangle(N);
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
