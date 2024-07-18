#include<bits/stdc++.h>
using namespace std;
string longestCommonPrefix(vector<string>& str) {
        string ans = "";
        int n = str[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<str.size();j++){
                if(str[0][i]!=str[j][i]){
                    return ans;
                }
            }
            ans+=str[0][i];
        }
        return ans;
    }
int main(){
    return 0;
}