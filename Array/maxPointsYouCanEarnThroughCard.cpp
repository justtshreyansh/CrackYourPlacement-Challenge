#include<bits/stdc++.h>
using namespace std;
int maxScore(vector<int>& arr, int k) {
        int left=0;
        int right =0;
        int maxi =0;
        for(int i=0;i<k;i++){
            left+=arr[i];
        }
        maxi = left;
        int j = arr.size()-1;

        for(int i=k-1;i>=0;i--){
            left-=arr[i];
            right+=arr[j--];
            maxi=max(maxi,left+right);
        }
        return maxi;
    }
int main(){
    return 0;
}