#include <iostream>
using namespace std;

pair<int, int> twoSum(int arr[], int n, int target)
{

    pair<int, int> p;

    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
        {

            if (arr[i] + arr[j] == target)
            {
                p.first = i;
                p.second = j;
                return p;
            }
        }

    p.first = -1;
    p.second = -1;
    return p;
}

int main()
{
    int arr[] = {4, 3, 2, 1};
    int n = 4;
    int target = 5;
    pair<int, int> ans;
    ans = twoSum(arr, n, target);
    cout << ans.first;
    cout << ans.second;
}