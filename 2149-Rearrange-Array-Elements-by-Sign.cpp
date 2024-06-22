#include<iostream>
#include<vector>

using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {
    vector<int> result (nums.size());
    int positive = 0, negative = 1;
    for(int i=0; i<nums.size(); i++){
        if(nums[i] >= 0){
            result[positive] = nums[i];
            positive += 2;
        }
        else{
            result[negative] = nums[i];
            negative += 2;
        }
    }
    return result;
}

int main(){
    vector<int> nums {3,1,-2,-5,2,-4};
    vector<int> result = rearrangeArray(nums);
    cout << "Rearranged Array:" << endl;
    for(auto it : result){
        cout << it << " ";
    }
    return 0;
}