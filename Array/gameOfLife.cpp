#include<bits/stdc++.h>
using namespace std;
void gameOfLife(vector<vector<int>>& arr) {
        vector<vector<int>> matrix = arr;
        for(int i=0;i<arr.size();i++){
            for(int j=0;j<arr[i].size();j++){
                //zero ke liye
                if(arr[i][j]==0){
                    int count =0;
                    //left wala
                    if(  j-1>=0 && arr[i][j-1]==1 ){
                        count++;
                    }
                    //right wala
                    if(j+1<arr[i].size() && arr[i][j+1]==1){
                        count++;
                    }
                    //niche wala
                    if(i+1<arr.size() && arr[i+1][j]==1){
                        count++;
                    }
                    //upar wala
                    if (i-1>=0 && arr[i-1][j]==1){
                        count++;
                    }
                    //left top
                    if(j-1>=0 && i-1>=0 && arr[i-1][j-1]==1){
                        count++;
                    }
                    //right top
                    if( j+1<arr[i].size() && i-1>=0 && arr[i-1][j+1]==1){
                        count++;
                    }
                    //bottom left
                    if(i+1<arr.size() &&  j-1>=0 && arr[i+1][j-1]==1) count++;
                    //bottom right
                    if(i+1<arr.size() && j+1<arr[i].size() && arr[i+1][j+1]==1)   count++;
                    if(count==3){
                        matrix[i][j] = 1;
                    }
                }
                //one ke liye
                else{
                     int count =0;
                    //left wala
                    if(  j-1>=0 && arr[i][j-1]==1 ){
                        count++;
                    }
                    //right wala
                    if(j+1<arr[i].size() && arr[i][j+1]==1){
                        count++;
                    }
                    //niche wala
                    if(i+1<arr.size() && arr[i+1][j]==1){
                        count++;
                    }
                    //upar wala
                    if (i-1>=0 && arr[i-1][j]==1){
                        count++;
                    }
                    //left top
                    if(j-1>=0 && i-1>=0 && arr[i-1][j-1]==1){
                        count++;
                    }
                    //right top
                    if( j+1<arr[i].size() && i-1>=0 && arr[i-1][j+1]==1){
                        count++;
                    }
                    //bottom left
                    if(i+1<arr.size() &&  j-1>=0 && arr[i+1][j-1]==1) count++;
                    //bottom right
                    if(i+1<arr.size() && j+1<arr[i].size() && arr[i+1][j+1]==1)   count++;
                    if(count<2) matrix[i][j]=0;
                    else if(count==2 || count==3) matrix[i][j] =1;
                    else{
                        matrix[i][j] =0;
                    }
                }
            }
        }
       arr = matrix;
    }
int main(){
    vector<vector<int>> arr = {{0,1,0},{0,0,1},{1,1,1},{0,0,0}};
    gameOfLife(arr);
    return 0;
}