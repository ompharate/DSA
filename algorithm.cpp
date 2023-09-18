// # Algo in STL
#include<iostream>
#include<algorithm>
using namespace std;



int main() {

    int arr[5] = {10,2,3,4,50};
    cout<<binary_search(arr,arr+5,49); // binary seach in stl

    int a = 10;
    int b = 20;

    cout<<min(a,b);
    cout<<max(a,b);
    swap(a,b);

    string abc = "ompharate";
    reverse(abc.begin(),abc.end());
    cout<<abc;

    cout<<*(abc.begin());
    sort(arr,arr+5);

    for (int i = 0; i <5; i++)
    {
        cout<<arr[i];
    }
    
    return 0;
}   