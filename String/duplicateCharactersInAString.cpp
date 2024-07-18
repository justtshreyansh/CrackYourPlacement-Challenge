#include<bits/stdc++.h>
using namespace std;
 char firstRep (string s)
    {
        //code here.
        unordered_map<char,int> mpp;
        for(int i=0;i<s.size();i++){
            mpp[s[i]]++;
        }
        for(int i=0;i<s.size();i++){
            if(mpp[s[i]]>=2){
                return s[i];
            }
            else continue;
        }
        return '#';
    }
int main(){
    return 0;
}