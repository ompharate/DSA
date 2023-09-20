#include <iostream>
#include <map>
#include <algorithm>
#include <limits.h>
using namespace std;

int maxFreq(int arr[], int n)
{
    map<int, int> mpp;

    for (int i = 0; i < n; i++)
    {

        if (mpp.count(arr[i]))
        {
            mpp[arr[i]]++;
        }
        else
        {
            mpp[arr[i]] = 1;
        }
    }
 
    int ele = 1;
    int pos = arr[0];
    for (auto i : mpp)
    {

        if (i.second >= ele)
        {
            cout<<"ok";
           
            ele = i.second;
            pos = i.first;
        }
    }
    return pos;
}

int main()
{
    int arr[] = {1,-2,1,-2};
    int n = 3;
    cout << maxFreq(arr, n);
}