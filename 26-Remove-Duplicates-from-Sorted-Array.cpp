#include<iostream>
#include<vector>

using namespace std;

int removeDuplicates(vector<int>& nums) {
    int i = 0;
    for(int j=1; j<nums.size(); j++){
        if(nums[j]!=nums[i]){
            nums[i+1] = nums[j];
            i++;
        }
    }
    return i+1;
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
    cout << "The array has " << removeDuplicates(vec) << " unique elements.";
    return 0;
}