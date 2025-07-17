/*
Problem: Longest Substring Without Repeating Characters
Approach: Sliding window using unordered_set
Time: O(n), Space: O(n)
*/

#include<bits/stdc++.h>
using namespace std;

int LongestSubstring(string s){
  unordered_set<char> seen;
  int left = 0;
  int maxLen = 0;

  for(int right = 0; right < s.length(); right++){
    while(seen.count(s[right])){
      seen.erase(s[left++]);
    }
    seen.insert(s[right]);
    maxLen = max(maxLen, right - left + 1);
  }
  return maxLen;
}

int main(){
  string s;
  cin >> s;

  cout << LongestSubstring(s) << endl;
  return 0;
}
