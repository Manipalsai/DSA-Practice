/*
Problem: Reverse Words in a String
Approach: Use stringstream to split and reverse
Time: O(n), Space: O(n)
*/

#include<bits/stdc++.h>
using namespace std;

string reverseWords(string s){
  stringstream ss(s);
  string word;
  vector<string> words;

  // spliting words & ignoring spaces
  while(ss >> word){
    words.push_back(word);
  }

  // reversing the word list
  reverse(words.begin(), words.end());

  // joining the words with a single space

string result = "";
  for(int i = 0; i < words.size(); i++){
    result += words[i];
    if(i != words.size() - 1)
      result += " ";
  }
  return result;
}

int main(){
  string s;
  getline(cin, s); // use getline because the input will have spaces

  cout << reverseWords(s) << endl;
  return 0;
}
