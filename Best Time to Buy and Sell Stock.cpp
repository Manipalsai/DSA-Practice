/*
Problem: Best Time to Buy and Sell Stock
Approach: Track minimum price so far and calculate max profit at each step.
Time Complexity: O(n)
Space Complexity: O(1)
*/

#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices){
  int minPrice = INT_MAX;
  int maxProfit = 0;

  for(int i = 0; i < prices.size(); i++){
    if(prices[i] < minPrice){
      minPrice = prices[i];
    }
    else if(prices[i] - minPrice > maxProfit){
      maxProfit = prices[i] - minPrice;
    }
  }
  return maxProfit;
}

int main(){
  int n;
  cin >> n;

  vector<int> prices(n);
  for(int i = 0; i < n; i++){
    cin >> prices[i];
  }

  cout << maxProfit(prices) << endl;
  return 0;
}
