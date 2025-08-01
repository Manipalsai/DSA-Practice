/*
Problem: Sort an array using Quick Sort
Approach: Choose a pivot, partition the array, and recursively sort left and right parts.
Time Complexity: O(n log n) on average
Space Complexity: O(log n) due to recursion stack
*/

#include<bits/stdc++.h>
using namespace std;

int partition(vector<int>& arr, int low, int high){
  int pivot = arr[high];  // Choosing last element as pivot
  int i = low - 1;     // Index of smaller element

  for(int j = low; j < high; j++){
     // If current element is smaller than pivot
    if(arr[j] < pivot){
      i++;
      swap(arr[i], arr[j]);  // Swap smaller element to the left side
    }
  }

  swap(arr[i + 1], arr[high]);  // Place pivot in correct position
  return  i + 1;  // Return pivot index
}

void quickSort(vector<int>& arr, int low, int high){
  if(low < high){
    int pi = partition(arr, low, high);  // Partition the array

    quickSort(arr, low, pi - 1);  // Sort left part
    quickSort(arr, pi + 1, high);  // Sort right part
  }
}

int main(){
  int n;
  cin >> n;

  vector<int> arr(n);

  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }

  quickSort(arr, 0, n -1);

  for(int i = 0; i < n; i++){
    cout << arr[i] << " ";
  }
  return 0;
}
