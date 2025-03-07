#include <iostream>
#include <conio.h>

using namespace std;

class Solution {
    public:
        int fib(int n){
            if(n==0 | n==1){
                return n;
            }
            else{
                return fib(n-2) + fib(n-1);
            };
        }
    };

int main(){

    int N;
    cin >> N;

    Solution sol;
    cout << sol.fib(N) <<endl;
    return 0;
}
