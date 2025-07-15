/*
Problem: Maximum Subarray Sum (Kadane's Algorithm)
Approach: Keep a running sum; reset to zero if it goes negative.
Time Complexity: O(n)
Space Complexity: O(1)
*/

#include<bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums){
  int maxSum = nums[0]; // starting with the first element in the array
  int currentSum = 0;

  for(int i = 0; i < nums.size(); i++){
    currentSum += nums[i];
    if(currentSum > maxSum){
      maxSum = currentSum;
    }
    if(currentSum < 0){
      currentSum = 0;
    }
  }
  return maxSum;
}

int main(){
  int n;
  cin >> n;

  vector<int> nums(n);
  for(int i = 0; i < n; i++){
    cin >> nums[i];
  }
  cout << maxSubArray(nums) << endl;
  return 0;
}
