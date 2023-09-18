// # Map in STL
#include<iostream>
#include<map>
using namespace std;

int main() {
    // o(logn)
    //  auto sort
    // Key Must Be unique

    map<int,string> m;
    
    m[1] = "om";
    m[2] = "pharate";
    m[3] = "i2it";


    m.insert({5,"karan"});
    m.erase(1);

    for(auto i: m){
        cout<<i.second;
    }

        // cout<<m[2];



    return 0;
}