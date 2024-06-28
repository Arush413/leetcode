#include<iostream>
#include<vector>

using namespace std;

void nextPermutation(vector<int>& nums) {
    int index = -1;
    int n = nums.size();
    if (n <= 1) return;
    for(int i=n-2; i>=0; i--){
        if(nums[i]<nums[i+1]){
            index = i;
            break;
        }
    }
    if(index == -1){
        reverse(nums.begin(), nums.end());
        return;
    }
    for(int i=n-1; i>index; i--){
        if(nums[i]>nums[index]){
            swap(nums[index], nums[i]);
            break;
        }
    }
    reverse(nums.begin() + index + 1, nums.end());
}

int main(){
    vector<int> nums {2,1,5,4,3,0,0};
    nextPermutation(nums);
    cout << "Next Permutation: ";
    for(auto it : nums){
        cout << it << " ";
    }
    return 0;
}