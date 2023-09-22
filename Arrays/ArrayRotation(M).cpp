#include <bits/stdc++.h> 
void rotateArrayTwo(int n, char d, int r, vector < int > & num) {
  

    vector<int> ans(n);

 

    if(d == 'b') {

        for(int i=0; i<n; i++)

        ans[ (i+n-r%n)%n ] = num[i];

    }

    else {

        for(int i=0; i<n; i++)

        ans[(i+r)%n] = num[i];

    }

 

   num=ans;



}