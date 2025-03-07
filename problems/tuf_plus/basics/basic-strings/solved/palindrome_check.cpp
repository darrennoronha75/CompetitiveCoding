#include <iostream>
#include <conio.h>
#include <string.h>
#include <vector>

using namespace std;

class Solution {
    public:
	
    bool palindromeCheck(string& s){
        
        //Initializations
        int left_ptr = 0;
        int right_ptr = s.size()-1;

        while(left_ptr < right_ptr){
            
            //Checking if left is equal to right
            if(s[left_ptr]!=s[right_ptr]){
                return false;
            }

            //Incrementing Pointers
            left_ptr = left_ptr + 1;
            right_ptr = right_ptr - 1;
        }

        return true;
    }
    

};
int main(){
    // int N;
    // cin >> N;

    string s;
    // cout << "Enter the string: ";
    getline(cin, s);

    Solution sol;
    cout<<sol.palindromeCheck(s)<<endl;

    // for (char c : s) {
    //     cout << c;
    // }
    // cout << endl;

    return 0;
}
