#include<iostream>
#include<vector>

using namespace std;

int maxSubArray(vector<int>& nums) {
    int sum = 0, maxSum = INT_MIN;

    for(int i=0; i<nums.size(); i++){
        if(sum < 0){
            sum = 0;
        }
        sum += nums[i];
        maxSum = max(sum, maxSum);
    }
    return maxSum;
}

int main(){
    vector<int> nums {-2,1,-3,4,-1,2,1,-5,4};
    cout << "The maximum sum of all subarrays is: " << maxSubArray(nums);
    return 0;
}