#include<iostream>
#include<vector>

using namespace std;
int freq(int arr[],int n) {
    vector<int> hash(n,0);

    for(int i=0;i<n;i++){

        hash[arr[i]-1]=+1;

    }

    // return hash; 

}

int main() {

    int arr[] = {1 ,3 ,4 ,3 ,4 ,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    freq(arr,n);

    return 0;
}