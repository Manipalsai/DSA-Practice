/*
Problem: Sort an array using Bubble Sort
Approach: Repeatedly compare adjacent elements and swap if they are in the wrong order.
Time Complexity: O(n^2)
Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

// Sorting function
void bubbleSort(vector<int>& arr) {
    int n = arr.size();

    // Outer loop for passes
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;   // Optimization flag

        // Inner loop for comparing adjacent elements
        for (int j = 0; j < n - i - 1; j++) {
            // If the left element is greater than the right, swap
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        // If no elements were swapped in this pass, array is already sorted
        if (!swapped) {
            break;
        }
    }
}

int main() {
    int n;
    cin >> n; 

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }

    bubbleSort(arr); 

    for (int num : arr) {
        cout << num << " "; 
    }
    return 0;
}
