// # Arrays in STL
#include<iostream>
#include<array>
using namespace std;
int main() {

    // int basic[3] = {1,2,3,4} // basic array

    // static array
    array<int, 4> arr ={1,2,3,4};

    int size = arr.size();
    // cout<<size;
    
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<arr[i];
    // }

    // cout<<arr.at(1);    o(1)
    // cout<<arr.at(3);    

    cout<<arr.empty(); // 0

    cout<<arr.front(); // 1
    cout<<arr.back(); // 4

    return 0;
}