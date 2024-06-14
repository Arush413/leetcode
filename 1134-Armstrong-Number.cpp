#include<iostream>
#include<cmath>
using namespace std;

class Solution {
public:
    int length(int x){
        int count = 0;
        while(x>0){
            count++;
            x = x/10;
        }
        return count;
    }

    bool isArmstrong(int x) {
        int k = length(x);
        int dupe = x;
        int sum = 0;
        bool armstrong;
        if(x<0) armstrong = false;
        else{
            while(x>0){
                int digit = x%10;
                sum += pow(digit, k);
                x = x/10;
            }
        }
        if(dupe == sum) armstrong = true;
        return armstrong;
    }
};

int main(){
    int x;
    cin>>x;
    Solution sol;
    int result = sol.isArmstrong(x);
    if(result == 1) cout<<"true";
    else cout<<"false";
    return 0;
}