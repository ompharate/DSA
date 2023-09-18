// # Vector in STL
#include<iostream>
#include<vector>
using namespace std;

int main() {


    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    // Size - capacity
   // cout<<v.capacity();
   // cout<<v.size();

    // cout<<v.at(1);
    // cout<<v[2];

    // cout<<v.front(); // 10
    // cout<<v.back(); // 50

    // for(int i:v){
    //     cout<<i;
    // }

    // v.pop_back();

    // for(int i:v){
    //     cout<<i;
    // }

    // cout<<v.capacity()<<endl; 8
    // cout<<v.size()<<endl; 5
    // v.clear();
    // cout<<v.capacity()<<endl; 8
    // cout<<v.size()<<endl; 0
    

// create a filled with 1 of size temp 5
    vector<int> a(5,1);  

    for (int i : a)
    {
        cout<<i;
    }
    
    // vector<int> temp(a); // copy of a
    return 0;
}