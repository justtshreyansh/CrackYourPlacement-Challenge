#include<bits/stdc++.h>
using namespace std;
int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                return nums[i];
            }
        }
        return nums[nums.size()-1];
    }
int main(){
    vector<int> nums = {1,4,3,2,2};
    return 0;
}