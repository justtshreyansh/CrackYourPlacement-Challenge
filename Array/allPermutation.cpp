#include<bits/stdc++.h>
using namespace std;
void printAllPermutation(vector<int> arr,vector<vector<int>> &ans,vector<int> temp,vector<bool> &freq){
    if(temp.size()==arr.size()){
        ans.push_back(temp);
        return ;
    }
    for(int i=0;i<arr.size();i++){
        if(!freq[i]){
            freq[i] = true;
            temp.push_back(arr[i]);
            printAllPermutation(arr,ans,temp,freq);
            freq[i] = false;
            temp.pop_back();
        }
    }
}
int main(){
    vector<int> arr = {1,2,3};
    vector<vector<int>> ans;
    vector<int> temp;
    vector<bool> freq = {false};
    printAllPermutation(arr,ans,temp,freq);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}