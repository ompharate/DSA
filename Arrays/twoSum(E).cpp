#include <bits/stdc++.h>

vector<pair<int,int>> twoSum(vector<int>& arr, int target, int n)

{

    sort(arr.begin(), arr.end());

    vector<pair<int,int>> ans;

    int left=0;

    int right=n-1;

    int sum=0;



    while(left<right){

        sum=arr[left]+arr[right];

        if(sum==target){

            ans.push_back({arr[left], arr[right]});

            left++;

            right--;

        }

        else if(sum<target) left++;

        else right--;

    }

    if(ans.empty()){

    ans.push_back({-1,-1});

    }

    return ans;

}

