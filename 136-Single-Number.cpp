#include<iostream>
#include<vector>

using namespace std;

int singleNumber(vector<int>& nums) {
    int n = nums.size();
    if(n==1) return nums[0];
    int xorr = 0;
    for(int i=0; i<n; i++){
        xorr = xorr ^ nums[i];
    }
    return xorr;
}

int main(){
    vector<int> nums {4,1,2,1,2};
    cout << "The missing number in the array is: " << singleNumber(nums);
    return 0;
}