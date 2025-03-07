#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <vector>
#include <stdlib.h>
#include <unordered_map>

using namespace std;

class Solution {
    public:
        //Function to return most Frequent element in an array
        int mostFrequentElement(vector<int>& nums) {

            //Initializations
            int n = nums.size();
            int maxFreq = 0;
            int maxEle;
            unordered_map<int, int> app; //Hashmap

             // Iterating on the array
            for (int i = 0; i < n; i++) {
                // Updating hashmap 
                app[nums[i]]++;
            }

            //Iterating on the map
            for(auto it: app){
                int ele = it.first; //Extract Key
                int freq = it.second; //Extract Value

                if(freq > maxFreq){
                    maxFreq = freq;
                    maxEle = ele;
                }
                else if(freq == maxFreq){
                    maxEle = min(maxEle, ele);
                }
            }

            return maxEle;

        }   
    };
    
    int main() {
        // Taking Input
        int N;
        // cout << "Enter the number of elements: ";
        cin >> N;
        
        vector<int> nums(N);
        // cout << "Enter the elements: ";
        for (int i = 0; i < N; i++) {
            cin >> nums[i];
        }
        
        // Create an instance of the Solution class
        Solution sol;
        
        cout << "Most frequent element: " << sol.mostFrequentElement(nums) << endl;
        
        return 0;
    }
    