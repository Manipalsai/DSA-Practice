/*
Problem: Contains Duplicate
Approach: Use unordered_set to check for repeats.
Time Complexity: O(n)
Space Complexity: O(n)
*/

#include<bits/stdc++.h>
using namespace std;

bool containsDup(vector<int> &nums){
  unordered_set<int> seen;
  for(int num : nums){
    if(seen.count(num)) {
      return true;
    }
    seen.insert(num);
  }
  return false;
}

int main(){
  int n;
  cin >> n;
  vector<int> nums(n);
  for(int i = 0; i < n; i++){
    cin >> nums[i];
  }
  cout << (containsDup(nums) ? "true" : "false") << endl;
  return 0;
}
