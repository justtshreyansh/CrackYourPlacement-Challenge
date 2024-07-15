#include<bits/stdc++.h>
using namespace std;
int maxProfit(vector<int>& prices) {
        int mini = prices[prices.size()-1];
        int maxProfit = 0;
        for(int i=prices.size()-2;i>=0;i--){
            if(prices[i]<mini){
                maxProfit = max(maxProfit,abs(prices[i]-mini));
            }
            else{
                mini = prices[i];
            }
        }
        return maxProfit;
    }
int main(){
    return 0;
}