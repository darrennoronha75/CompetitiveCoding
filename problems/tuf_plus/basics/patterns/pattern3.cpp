#include <iostream>
using namespace std;

class Solution {
public:
    //Function to print pattren1
    void pattern3(int n) {
        
        // Outer loop will run for rows.
        for (int i = 1; i <= n; i++) {
            
            // Inner loop will run for columns.
            for (int j = 1; j <= i; j++) {
                cout << j;
            }
            /* As soon as n stars are printed, move
            to the next row and give a line break.*/
            cout << endl;
        }
    }

};

int main() {
    int N = 4;
    
    //Create an instance of the Solution class
    Solution sol;
    
    sol.pattern3(N);
    
    return 0;
}
