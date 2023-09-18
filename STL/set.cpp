// # Set in STL
#include<iostream>
#include<set>
using namespace std;

int main() {

    set<int> s;

    //  O(log n) - insert
    s.insert(10);
    s.insert(500);
    s.insert(100);
    s.insert(100);  

    // for (int i:s) {
    //     cout<<i;
    // }

    // set<int>::iterator it = s.begin();
    // it++;
    // s.erase(it);

    // for (int i:s) {
    //     cout<<i;
    // }

    // cout<<s.count(6); present - 1 otherwise 0

}