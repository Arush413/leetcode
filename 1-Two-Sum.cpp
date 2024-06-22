#include<iostream>
#include<vector>
#include<map>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    map<int, int> mappa;
    vector<int> result;
    for(int i=0; i<nums.size(); i++){
        int rem = target - nums[i];
        if(mappa.find(rem) != mappa.end()){
            result.push_back(i);
            result.push_back(mappa[rem]);
            break;
        }
        mappa[nums[i]] = i;
    }
    return result;
}

int main(){
    vector<int> nums{2,7,11,15};
    int target = 9;
    vector<int> result = twoSum(nums, target);
    cout << "Indices of the numbers that add up to " << target << " are: ";
    for(int i = 0; i<2; i++){
        cout << result[i] << " ";
    }
    return 0;
}