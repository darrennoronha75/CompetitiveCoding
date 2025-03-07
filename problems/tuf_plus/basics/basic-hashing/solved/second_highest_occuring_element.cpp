#include <iostream>
#include <vector>
#include <unordered_map>
#include <climits>

using namespace std;

class Solution {
    public:
        // Function to return the second most frequent element in an array
        int secondMostFrequentElement(vector<int>& nums) {
            int n = nums.size();
            int maxFreq = 0;
            int secondMaxFreq = 0;
            int maxEle = INT_MIN;
            int secondMaxEle = INT_MAX;
            unordered_map<int, int> app; // Hashmap

            // Iterating on the array
            for (int i = 0; i < n; i++) {
                // Updating hashmap 
                app[nums[i]]++;
            }

            // Iterating on the map
            for (auto it : app) {
                int ele = it.first; // Extract Key
                int freq = it.second; // Extract Value

                // Sequence to store max Frequency element
                if (freq > maxFreq) {
                    secondMaxFreq = maxFreq;
                    secondMaxEle = maxEle;
                    maxFreq = freq;
                    maxEle = ele;
                
                }
                else if(freq == maxFreq){
                    maxEle = min(maxEle, ele);
                }
                else if (freq > secondMaxFreq && freq < maxFreq) {
                    secondMaxFreq = freq;
                    secondMaxEle = ele;
                } else if (freq == secondMaxFreq) {
                    secondMaxEle = min(secondMaxEle, ele);
                }

                // cout<<"-----------"<<endl;
                // cout<<"Iteration"<<endl;
                // cout<<"Element is "<<ele<<endl;
                // cout<<"Frequency is "<<freq<<endl;
                // cout<<"Max Frequency is "<<maxFreq<<endl;
                // cout<<"Max Element is "<<maxEle<<endl;
                // cout<<"Second Frequency is "<<secondMaxFreq<<endl;
                // cout<<"Second Max Element is "<<secondMaxEle<<endl;
                // cout<<"-----------"<<endl;

            }

            if (secondMaxFreq == 0 || secondMaxEle == INT_MAX) {
                return -1;
            }

            return secondMaxEle;
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
    
    cout << sol.secondMostFrequentElement(nums) << endl;
    
    return 0;
}