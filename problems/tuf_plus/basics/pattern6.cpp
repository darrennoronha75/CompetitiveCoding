#include <iostream>
using namespace std;

class Solution {
public:
    //Function to print pattren1
    void pattern6(int n) {
        
        // Outer loop will run for rows.
        for (int i = n; i > 0; i--) {
            
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
    int N;
    cin>>N;
    
    //Create an instance of the Solution class
    Solution sol;
    
    sol.pattern6(N);
    
    return 0;
}
