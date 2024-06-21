#include<iostream>
#include<vector>

using namespace std;

void moveZeroes(vector<int>& nums) {
    int j = -1;
    int n = nums.size();
    if(n==1) return;
    for(int i=0; i<n; i++){
        if(nums[i] == 0){
            j=i;
            break;
        }
    }
    if(j==-1) return;
    for(int i=j+1; i<n; i++){
        if(nums[i] != 0){
            swap(nums[i], nums[j]);
            j++;
        }
    }
}

int main(){
    vector<int> nums{0,1,0,3,12};
    moveZeroes(nums);
    for(auto it : nums) cout << it << " ";
    return 0;
}