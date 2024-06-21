#include<iostream>
#include<vector>

using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int n = nums.size();
    int maxCount = 0;
    int maxCountEndingHere = 0;
    for(int i=0; i<n; i++){
        if(nums[i] == 1){
            maxCountEndingHere += 1;
            if(maxCount < maxCountEndingHere) maxCount = maxCountEndingHere;
        }
        else maxCountEndingHere = 0;
    }
    return maxCount;
}

int main(){
    vector<int> nums {1,1,0,1,1,1};
    cout << "The maximum number of consecutive ones in this array is: " << findMaxConsecutiveOnes(nums);
    return 0;
}