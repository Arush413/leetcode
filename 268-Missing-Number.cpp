#include<iostream>
#include<vector>

using namespace std;

int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int sum = 0;
    int target = n*(n+1)/2;
    for(int i=0; i<n; i++){
        sum += nums[i];
    }
    return target-sum;
}

int main(){
    vector<int> nums{9,6,4,2,3,5,7,0,1};
    cout << "The missing number in the array is: " << missingNumber(nums);
    return 0;
}