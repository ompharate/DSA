#include <iostream>
#include <vector>
using namespace std;
vector<pair<int, int>> twoSum(vector<int> &arr, int target, int n) {
  vector<pair<int, int>> ans;

  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (arr[i] + arr[j] == target) {
        ans.push_back({arr[i], arr[j]});
      }
    }
  }
 
  ans.push_back({-1,-1});
  return ans;
}


int main()
{
    // vector<int> arr = {3 ,3 ,3 ,3 ,3 ,3 ,3, 3, 3 ,3};
    vector<int> arr = {2,7,1,13};
    int n = 4;
    int target = 9;
    vector<pair<int, int>> ans;
    ans = twoSum(arr, target, n);
    
    for (auto i:ans)
    {
        cout<<i.first<<ends<<i.second;
    }
    

}