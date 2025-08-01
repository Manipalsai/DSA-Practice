/*
Problem: Sort an array using Selection Sort
Approach: Repeatedly find the minimum element and move it to the front.
Time Complexity: O(n^2)
Space Complexity: O(1)
*/

#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>& arr){
  int n = arr.size();

  for(int i = 0; i < n - 1; i++){
    int minIndex = i;

    for(int j = i + 1; j < n; j++){
      if(arr[j] < arr[minIndex]){
        minIndex = j;
      }
    }

    if(minIndex != i){
      swap(arr[i], arr[minIndex]);
    }
  }
}

int main(){
  int n;
  cin >> n;

  vector<int> arr(n);
  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }

  selectionSort(arr);

  for(int num : arr){
    cout << num << " ";
  }
  return 0;
}
