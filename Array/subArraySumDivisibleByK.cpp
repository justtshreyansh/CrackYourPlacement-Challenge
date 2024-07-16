#include<bits/stdc++.h>
using namespace std;
int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        int sum =0;
        int rem =0;
        int ans =0;
        mpp[rem]++;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            rem = sum %k;
            if(rem<0){
                rem+=k;

            }
            if(mpp.find(rem)!=mpp.end()){
                ans+=mpp[rem];
            }
            mpp[rem]++;
        }
        return ans;
}
int main(){
    return 0;
}