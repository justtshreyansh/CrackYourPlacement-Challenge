#include<bits/stdc++.h>
using namespace std;
vector<int> getFloorAndCeil(int x, vector<int> arr) {
        // code here
        int diff = INT_MAX;
        int ans1 =-1;
        int diff2 = INT_MAX;
        int ans2=-1;
        int n =arr.size();
        for(int i=0;i<n;i++){
            if(x>=arr[i] && x-arr[i]<diff){
                diff = x-arr[i];
                ans1 = arr[i];
            }
            if(x<=arr[i] && arr[i]-x<diff2){
                diff2 = arr[i]-x;
                ans2 = arr[i];
            }
        }
        vector<int> ans = {ans1,ans2};
        return ans;
    }
int main(){
    return 0;
}