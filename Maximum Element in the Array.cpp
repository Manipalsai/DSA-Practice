#include<bits/stdc++.h>
using namespace std;

int findMax(int arr[], int n){
  int maxEle = arr[0];
  for(int i = 0; i < n; i++){
    if(arr[i] > maxEle){
      maxEle = arr[i];
    }
  }
  return maxEle;
}

int main(){
  int arr[] = {1,5,8,4,9};
  int n = sizeof(arr) / sizeof(arr[0]);
  cout << "Max Element: " << findMax(arr, n) << endl; 
  return o;
}
