/*
Problem: Sort an array using Insertion Sort
Approach: Build the sorted array one element at a time by placing elements in the correct position relative to already-sorted part.
Time Complexity: O(n^2)
Space Complexity: O(1)
*/

#include<bits/stdc++.h>
using namespace std;


void insertionSort(vector<int>& arr){
  int n = arr.size();

  for(int i = 1; i < n; i++){
    int key = arr[i];
    int j = i - 1;

    while(j >= 0 && arr[j] > key){
      arr[j + 1] = arr[j];
      j--;
    }

    arr[j + 1] = key;
  }
}

int main(){
  int n;
  cin >> n;

  vector<int> arr(n);

  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }

  insertionSort(arr);

  for( int num : arr){
    cout << num << " ";
  }

  return 0;
}
