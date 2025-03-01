#include <iostream>
#include <vector>
#include <unordered_map>
#include <climits>

using namespace std;

class Solution {
    public:
        // Function to return the sum of highest and lowest frequency.
        int sumHighestAndLowestFrequency(vector<int>& nums) {
            int n = nums.size();
            int maxFreq = 0;
            int minFreq = INT_MAX;
            unordered_map<int, int> app; // Hashmap

            if(n==1){
                return 2;
            }

            // Iterating on the array
            for (int i = 0; i < n; i++) {
                // Updating hashmap 
                app[nums[i]]++;
            }

            //Iterating on the hashmap
             // Iterating on the map
             for (auto it : app) {
                int ele = it.first; // Extract Key
                int freq = it.second; // Extract Value

                // Sequence to store max Frequency element
                if (freq > maxFreq) {
                    maxFreq = freq;                
                }
    
                // Sequence to store max Frequency element
                if (freq < minFreq) {
                    minFreq = freq;
                
                }             



                 }
                
            // cout<<maxFreq<<endl;
            // cout<<minFreq<<endl;
            return maxFreq + minFreq;
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
    
    cout << sol.sumHighestAndLowestFrequency(nums) << endl;
    
    return 0;
}