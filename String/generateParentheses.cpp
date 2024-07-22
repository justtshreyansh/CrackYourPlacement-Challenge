#include<bits/stdc++.h>
using namespace std;
void solve(int open,int close,vector<string>&ans,string op){
    if(open==0 && close==0){
        ans.push_back(op);
        return ;
    }
    if(open!=0){
        string op1 = op;
        op1.push_back('(');
        solve(open-1,close,ans,op1);
    }
    if(open<close){
        string op2 = op;
        op2.push_back(')');
        solve(open,close-1,ans,op2);
    }
}

int main(){
   
    return 0;
}