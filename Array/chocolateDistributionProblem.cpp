#include<bits/stdc++.h>
using namespace std;
long long findMinDiff(vector<long long> &arr, long long n, long long m){
    //code
    sort(arr.begin(),arr.end());
    long long diff =INT_MAX;
    int j = 0;
   
    while(j<arr.size() && (j+m-1)<arr.size()){
        diff = min(diff,(arr[j+m-1]-arr[j]));
        j++;
    }
    return diff;
    }  
int main(){
    vector<long long > arr = {1,3,4,7,9,9,12,56};
    int m = 5;
    int n = 8;
    cout<<findMinDiff(arr,n,m);
    return 0;
}