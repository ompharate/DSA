// # Map in STL
#include<iostream>
#include<map>
using namespace std;

int main() {
    // o(logn)
    //  auto sort
    // Key Must Be unique

    map<int,int> m;
    
    m[1] = 10;
    m[2] = 20;
    m[3] = 30;

    m[3]++;
 
    for(auto i: m){
        cout<<i.second;
    }

        // cout<<m[2];



    return 0;
}