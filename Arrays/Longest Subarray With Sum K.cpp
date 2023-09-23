// Positive
int longestSubarrayWithSumK(vector<int> arr, long long k) {
    int n = arr.size();
  long long sum = arr[0];
  int left = 0;
  int right = 0;
  int maxLen = 0;
  while(right<n) {
  

    while(sum>k && left<=right) {
      sum-=arr[left];
      left++;
    }
    
    if(sum==k){
      maxLen = max(maxLen,(right-left+1));
    }
    right++;
    
    if(right<n) 
    sum+=arr[right];
    
 
    
  }

  return maxLen;
  
     

}