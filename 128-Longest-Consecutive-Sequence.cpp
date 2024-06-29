#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

int longestConsecutive(vector<int>& nums) {
    unordered_set<int> finder;
    int n = nums.size();
    if(n==0) return 0;
    for(int i=0; i<n; i++){
        finder.insert(nums[i]);
    }
    int longest = 1;
    for(auto it : finder){
        if(finder.find(it-1)==finder.end()){
            int count = 1;
            int x = it;
            while(finder.find(x+1)!=finder.end()){
                x = x+1;
                count = count+1;
            }
            longest = max(longest, count);
        }
    }
    return longest;
}

int main(){
    vector<int> nums {0,3,7,2,5,8,4,6,0,1};
    cout << "The longest consecutive sequence of this array is of length: " << longestConsecutive(nums);
    return 0;
}