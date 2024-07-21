#incldue<bits/stdc++.h>
using namespace std;
int findPair(int n, int x, vector<int> &arr) {
        // code here
        
        sort(arr.begin(),arr.end());
        int low =0;
        int high = 1;
        while(low<n && high<n){
            if(arr[high]-arr[low]==x && low!=high) return 1;
            else if(arr[high]-arr[low]<x) high++;
            else low++;
        }
        return -1;
    }
int main(){
    return 0;
}