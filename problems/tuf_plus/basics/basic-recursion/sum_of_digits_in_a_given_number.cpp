#include <iostream>
#include <conio.h>

using namespace std;

class Solution {
    public:
	
    int sumDigits(int num){
        if(n/10 == 0){
            return n%10;
        }
        else{
            return n%10 + Solution.addDigits(n/10);
        }
        }
    };

    int addDigits(int num){
        sum = sumDigits(num)
        if(num/10 == 0){
            return n%10;
        }
        else{
            return Solution.sumDigits(sum);
        }

        // while(sum/10!= 0){
        //     sum = sumDigits(num)
        // }
    };


int main(){

    int N;
    cin >> N;

    Solution sol;
    cout << sol.addDigits(N) <<endl;
    return 0;
}
