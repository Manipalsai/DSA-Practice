/*
Problem: Move Zeroes
Approach: Two-pointer method. Shift non-zeros forward, then fill rest with zeros.
Time Complexity: O(n)
Space Complexity: O(1)
*/

#include<bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& nums){
  int n = nums.size();
  int nonZero = 0;

  // move the non zero elements front
  for(int i = 0; i < n; i++){
    if(nums[i] != 0){
      nums[nonZero++] = nums[i];
    }
  }
  // fill the remaining positions with zeros
  while(nonZero < n){
    nums[nonZero++] = 0;
  }
}

int main(){
  int n;
  cin >> n;
  vector<int> nums(n);
  for(int i = 0; i < n; i++){
    cin >> nums[i];
  }
  moveZeroes(nums);
  for(int i = 0; i < n; i++){
    cout << nums[i] << " ";
  }
  cout << endl;
  return 0;
} 
