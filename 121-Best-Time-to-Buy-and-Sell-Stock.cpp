#include<iostream>
#include<vector>

using namespace std;

int maxProfit(vector<int>& prices) {
    int profit = 0;
    int maxProfit = 0;
    int minimum = prices[0];
    for(int i=0; i<prices.size(); i++){
        profit = prices[i] - minimum;
        maxProfit = max(profit, maxProfit);
        minimum = min(minimum, prices[i]);
    }
    return maxProfit;
}

int main(){
    vector<int> prices {7,1,5,3,6,4};
    cout << "The maximum profit that can be achieved is: " << maxProfit(prices);
    return 0;
}