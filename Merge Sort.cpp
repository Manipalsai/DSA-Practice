/*
Problem: Sort an array using Merge Sort
Approach: Divide the array into halves, sort each half recursively, and then merge the two sorted halves.
Time Complexity: O(n log n)
Space Complexity: O(n) – due to temporary arrays during merging
*/

#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr, int low, int mid, int high){
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    // Sorting elements into temp array
    while(left <= mid && right <= high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // Remaining elements on left side
    while(left <= mid){
        temp.push_back(arr[left]);
        left++;
    }

    // Remaining elements on right side
    while(right <= high){
        temp.push_back(arr[right]);
        right++;
    }

    // Copy temp array back into original
    for(int i = low; i <= high; i++){
        arr[i] = temp[i - low];
    }
}

void mergeSort(vector<int>& arr, int low, int high){
    if(low >= high) return;

    int mid = (low + high) / 2;

    mergeSort(arr, low, mid);       // Left half
    mergeSort(arr, mid + 1, high);  // Right half
    merge(arr, low, mid, high);     // Merge
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    mergeSort(arr, 0, n - 1);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
