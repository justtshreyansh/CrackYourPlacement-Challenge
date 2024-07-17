#include<bits/stdc++.h>
using namespace std;
int subarraySum(vector<int>& nums, int k) {
        map<int,int> mpp;
        int sum =0;
        int rem =0;
        int ans =0;
        mpp[0]=1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            rem = sum- k;
            ans+=mpp[rem];
            mpp[sum]++;
        }
        return ans;
    }
int main(){
    return 0;
}