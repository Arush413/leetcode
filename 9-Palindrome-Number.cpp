#include<iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        int dupe = x;
        long rev = 0;
        bool palindrome;
        if(x<0) palindrome = false;
        else if(x>=0 && x<10) palindrome = true;
        else if(x>=10){
            while(x>0){
                rev = rev*10 + x%10;
                x = x/10;
            }
        }
        if(dupe == rev) palindrome = true;
        return palindrome;
    }
};

int main(){
    int x;
    cin>>x;
    Solution sol;
    int result = sol.isPalindrome(x);
    if(result == 1) cout<<"True";
    else cout<<"False";
    return 0;
}