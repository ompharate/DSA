int isSorted(int n, vector<int> arr) {
  int i = 0;
  int j = 1;
  while (j < n) {

    if (!(arr[i] <= arr[j])) {
      return 0;
    }
    i++;
    j++;
  }
  return 1;
}

