#include <iostream>
#include <conio.h>
#include <string.h>
#include <vector>

using namespace std;

class Solution {
    public:
	
    void reverseString(vector<char>& s){
        
        //Initializations
        int left_ptr = 0;
        int right_ptr = s.size()-1;

        while(left_ptr < right_ptr){
            
            // Swapping Logic
            int temp = s[left_ptr];
            s[left_ptr] = s[right_ptr];
            s[right_ptr] = temp;

            //Incrementing Pointers
            left_ptr = left_ptr + 1;
            right_ptr = right_ptr - 1;
        }
    }
    

};
int main(){
    int N;
    cin >> N;

    vector<char> s(N);
    for (int i = 0; i < N; i++) {
        cin >> s[i];
    }

    Solution sol;
    sol.reverseString(s);

    for (char c : s) {
        cout << c;
    }
    cout << endl;

    return 0;
}
