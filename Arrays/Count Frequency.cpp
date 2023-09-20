#include <bits/stdc++.h> 
vector<int> findFrequency(string str) {
	
        vector<int> ans(26,0);
        
        int j = 0;
        for(int i=0;i<str.size();i++){
        
                j = str[i] - 'a';
                ans[j]++;       
                j=0;
        }
        
        return ans;
}