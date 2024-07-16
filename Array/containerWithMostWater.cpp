#include<bits/stdc++.h>
using namespace std;
int maxArea(vector<int>& height) {
        int maxArea = 0;
        int i =0;
        int j = height.size()-1;
        while(i<j){
            int currArea = min(height[i],height[j])*(j-i);
            maxArea = max(maxArea,currArea);
            if(height[i]<height[j]){
                i++;
            }
            else j--;
        }
        return maxArea;
    }
int main(){
    return 0;
}