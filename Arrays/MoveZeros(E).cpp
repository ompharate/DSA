// Always use for loop
vector<int> moveZeros(int n, vector<int> arr) {
  int i = 0;
  for (int j = 0; j < n; j++) {
    if (arr[j] != 0) {
      swap(arr[j], arr[i]);
      i++;
    }

  }
  return arr;
}
