#include<iostream>
#include<vector>

using namespace std;

bool check(vector<int>& nums) {
    int count = 0;
    for(int i=0; i<nums.size()-1; i++){
        if(nums[i]>nums[i+1]) count++;
    }
    if(count>1) return false;
    else if(count == 1 && nums.front()<nums.back()) return false; 
    return true;
}

int main(){
    vector<int> vec;
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the elements of the array:" << endl;
    for(int i=0; i<n; i++){
        int element;
        cin >> element;
        vec.push_back(element);
    }
    if(check(vec)==1) cout << "true";
    else cout << "false";
    return 0;
}