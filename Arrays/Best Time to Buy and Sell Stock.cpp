#include <bits/stdc++.h> 
int maximumProfit(vector<int> &arr){
  int n = arr.size();

  int maxPro = 0;
  int minimal = INT_MAX;
  for(int i=0;i<n;i++) {
    minimal = min(minimal,arr[i]);
    maxPro = max(maxPro,arr[i]-minimal);
  }
  return maxPro;
}