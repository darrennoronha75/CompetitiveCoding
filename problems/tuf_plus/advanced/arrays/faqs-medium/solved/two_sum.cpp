#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution
{
public:    

    // Function to return indices that add up to target
    vector<int> twoSum(vector<int>& nums, int target) {

        //Initialization
        vector<int> result;
        unordered_map <int, int> sumHash;
        int nptr = 0;

        //Approaches
        //Two Good Approaches 
        //Approach 1 - Sort the array - then use left and right ptr. Applied this - takes - O(nlogn) time in worst case
        //Approach 2 - use a HashMap - (Trying this one) - A Hashmap has O(1) Lookup.
        for(int i = 0; i <size(nums); i++){
            //For each hash indice, store the complement of the number
            //If a number is found that is already contained in the hash map, then return it and the result
            if(sumHash.find(nums[i]) == sumHash.end()){
                //If not found, add complement to hash
                sumHash[target-nums[i]] = i;
            }
            else{

                //If found, add to result vector and return
                int larger_number;
                int smaller_number;

                if(sumHash[target - nums[i]]> i){
                    smaller_number = i;
                    larger_number = sumHash[nums[i]];
                }
                else{
                    smaller_number = sumHash[nums[i]];
                    larger_number = i;
                }
                
                result.push_back(smaller_number);
                result.push_back(larger_number);

                return result;
                

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
    vector<int> result = sol.twoSum(nums, target);
    for (int i = 0; i < size(result); i++)
    {
        cout << result[i] << " ";
    }

    return 0;


}

