#include<iostream>
#include<vector>

using namespace std;

void rotate(vector<int>& nums, int k) {
    vector<int> temp;
    int n = nums.size();

    k = k%n;
    if(k==0) return;

    for(int i=n-k; i<n; i++){
        temp.push_back(nums[i]);
    }

    for(int i=n-k-1; i>=0; i--){
        nums[i+k] = nums[i];
    }

    for(int i=0; i<k; i++){
        nums[i] = temp[i];
    }
}

int main(){
    vector<int> nums {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    cout << "Rotated Array: ";
    rotate(nums, k);
    for(auto it : nums){
        cout << it << " ";
    }
    return 0;
}