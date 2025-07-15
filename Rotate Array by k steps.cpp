/*
Problem: Rotate Array by k steps
Approach: Reverse entire array, then reverse parts.
Time Complexity: O(n)
Space Complexity: O(1)
*/

#include<bits/stdc++.h>
using namespace std;

void reverse(vector<int>& nums, int start, int end){
  while(start < end){
    swap(nums[start], nums[end]);
    start++;
    end--;
  }
}

void rotate(vector<int>& nums, int k){
  int n = nums.size();
  k = k % n;

  // reverse all
  reverse(nums, 0, n - 1);

  // reverse first k
  reverse(nums, 0, k - 1);

  // reverse remaining elements
  reverse(nums, k, n - 1);
}

int main(){
  int n;
  cin >> n;
  vector<int> nums(n);
  for(int i = 0; i < n; i++){
    cin >> nums[i];
  }
  int k;
  cin >> k;

  rotate(nums, k);
  for(int i = 0; i < n; i++){
    cout << nums[i] << " ";
  }
  cout << endl;
  return 0;
}
