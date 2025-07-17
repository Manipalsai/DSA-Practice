/*
Problem: Valid Anagram
Approach: Count characters using array of size 26
Time: O(n), Space: O(1)
*/

#include<bits/stdc++.h>
using namespace std;

bool anagram(string s, srting t){
  if(s.length() != t.length()) return false;

  vector<int> count(26, 0);

  for(char c : s) count[c - 'a']++;
  for(char c : t) count[c - 'a']--;

  for(int freq : count){
    if(freq != 0) return false;
  }
  return true;
}

int main(){
  string s, t;
  cin >> s >> t;

  cout << (anagram(s, t) ? "true" : "false") << endl;
  return 0;
}
