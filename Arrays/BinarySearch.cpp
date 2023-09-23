int binarySearch(vector<int> &arr, int low, int high, int target) {

  if (low <= high) {

  int mid = (low + high) / 2;

  if (arr[mid] == target) {
    return mid;
  }

  if (target < arr[mid]) {a
    return binarySearch(arr, 0, mid - 1,target);
  } else {
    return binarySearch(arr, mid + 1, high, target);
  }
  }else{
      return -1;
  }
}

int search(vector<int> &nums, int target) {
  int low = 0;
  int high = nums.size();
  binarySearch(nums, low, high, target);
}