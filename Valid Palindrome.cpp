/*
Problem: Valid Palindrome
Approach: Two-pointer with cleanup on the fly
Time: O(n), Space: O(1)
*/

#include<bits/stdc++.h>
using namespace std;

bool palindrome(string s){
  int left = 0;
  int right = s.length() - 1;

  while(left < right){
    // skiping non-alphanumeric characters
    while(left < right && !isalnum(s[left))) left++;
    while(left < right && !isalnum(s[right))) right--;
    
    // comparing lowercase version of both characters
    if(tolower(s[left]) != tolower(s[right])){
      return false;
    }
    left++;
    right--;
  }
  return true;
}


int main(){
  string s;
  getline(cin, s);

  cout << (palindrome(s) ? "true" : "false") << endl;
  return 0;
}
