#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int>& nums) {
        unordered_map<int,int> mpp;
        int j =0;
        for(int i=0;i<nums.size();i++){
            if(mpp.find(nums[i])==mpp.end()){
                mpp[nums[i]]++;
                nums[j++] = nums[i];
            }
        }
        return j;
    }
int main(){
    return 0;
}