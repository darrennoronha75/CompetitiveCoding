#include <iostream>
#include <conio.h>
#include <string.h>
#include <vector>

using namespace std;

class Solution {
    public:
	
    void reverseString(vector<char>& s){
        //your code goes here
        cout 
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

    cout << "Reversed string: ";
    for (char c : s) {
        cout << c;
    }
    cout << endl;

    return 0;
}
