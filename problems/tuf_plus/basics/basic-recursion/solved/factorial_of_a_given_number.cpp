#include <iostream>
#include <conio.h>

using namespace std;

class Solution{

    public:
    long long int factorial(int n){
        if(n==0 | n==1){
            return 1;
        }
        else{
            return n*fib(n-1);
        };
    }
};

int main(){

    int N;
    cin >> N;

    Solution sol;
    cout << sol.factorial(N) <<endl;
    return 0;
}
