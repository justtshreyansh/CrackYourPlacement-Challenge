#include<bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> arr;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            arr.push_back({nums[i],i});
        }
        sort(arr.begin(),arr.end());
        int i=0;
        int j = arr.size()-1;
        while(i<j){
            long long sum = arr[i].first+arr[j].first;
            if(sum==target){
                ans.push_back(arr[i].second);
                ans.push_back(arr[j].second);
                return ans;
            }
            else if(sum>target){
                j--;
            }
            else{
                i++;
            }
        }
        return ans;
    }
int main(){
    return 0;
}