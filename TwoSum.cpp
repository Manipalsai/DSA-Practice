/*
Problem: Two Sum
Approach: Used unordered_map to store numbers we've seen and their indices.
For each number, checked if its complement (target - num) is already in the map.
If yes → return indices. If not → add num to the map.
Time Complexity: O(n)
Space Complexity: O(n)
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target){
  unordered_map<int, int> mp;
  for(int i = 0; i < nums.size(); i++){
    int comp = target - nums[i];

    // checking if the complement exists in map or not
    if(mp.find(comp) != mp.end()){
      return {mp[comp], i};
    }

    // else, storing the num with its index
    mp[nums[i]] = i;
    
  }
  return {}; // if not found
}

int main(){
  int n, target;
  cin >> n;

  vector<int> nums(n);
  for(int i = 0; i < n; i++){
    cin >> nums[i];
  }

  cin >> target;

  vector<int> result = twoSum(nums, target);
  cout << result[0] << " " << result[1] << endl;

  return 0;
}


