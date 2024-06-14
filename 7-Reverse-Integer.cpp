#include<iostream>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        long rev = 0;
        if(x>-10 && x<10) return x;
        else if(x>=10){
            while(x>0){
                rev = rev*10 + x%10;
                x = x/10;
            }
        }
        else{
            while(x<0){
                rev = rev*10 + x%10;
                x = x/10;
            }
        }
        if(rev>INT_MAX || rev<INT_MIN) return 0;
        return rev;
    }
};


int main(){
    int x;
    cin>>x;
    Solution sol;
    int result = sol.reverse(x);
    cout<<result;
    return 0;
}