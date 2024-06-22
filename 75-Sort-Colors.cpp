#include<iostream>
#include<vector>

using namespace std;

void sortColors(vector<int>& nums) {
    int l = 0, r = nums.size()-1, i = 0;
    while(i<=r){
        if(nums[i] == 0){
            swap(nums[l], nums[i]);
            l++;
            i++;
        }
        else if(nums[i] == 1) i++;
        else if(nums[i] == 2){
            swap(nums[i], nums[r]);
            r--;
        }
    }
}

int main(){
    vector<int> nums {2,0,2,1,1,0};
    sortColors(nums);
    cout << "The sorted array is: ";
    for(auto it : nums){
        cout << it << " ";
    }
    return 0;
}