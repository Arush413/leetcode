#include<iostream>
#include<vector>

using namespace std;

int majorityElement(vector<int>& nums) {
    int majority = -1, votes = 0;
    for(int i=0; i<nums.size(); i++){
        if(votes==0){
            majority = nums[i];
            votes = 1;
        }
        else{
            if(nums[i] == majority){
                votes++;
            }
            else{
                votes--;
            }
        }
    }
    return majority;
}

int main(){
    vector<int> nums {2,2,1,1,1,2,2};
    cout << "The majority element of the array is: " << majorityElement(nums);
    return 0;
}