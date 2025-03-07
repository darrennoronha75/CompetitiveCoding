#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
    public:

        //Function to find leaders in an array
        vector<int> leaders(vector<int>& nums){
            
            //Initializations
            vector<int> leaders = {};
            int right_ptr = size(nums)-1;
            int max_yet = nums[right_ptr];
            
            while(right_ptr >=0){
                // cout<<nums[right_ptr]<<endl;
                if(right_ptr== (size(nums)-1)){
                    leaders.push_back(nums[right_ptr]);
                }
                else{
                    // cout<<max_yet<<endl;
                    if(nums[right_ptr]>max_yet){
                        max_yet = nums[right_ptr];
                        leaders.push_back(nums[right_ptr]);
                    }
                }

                right_ptr = right_ptr-1;
            }         

            reverse(leaders.begin(), leaders.end());

            return leaders;

        }        
        };

    
    int main()  {
        // Taking Input
        int N;
        // cout << "Enter the number of elements: ";
        cin >> N;
        
        vector<int> nums(N);
        // cout << "Enter the elements: ";
        for (int i = 0; i < N; i++) {
            cin >> nums[i];
        }

        // int target;
        // cin >> target;
        
        // Create an instance of the Solution class
        Solution sol;
        vector<int> result = sol.leaders(nums);        
        for (int i = 0; i < size(result); i++) {
            cout << result[i]<< " ";
        }        
        return 0;
    }

