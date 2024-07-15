#include<bits/stdc++.h>
using namespace std;
void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>> visited = matrix;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    for(int k=0;k<matrix[0].size();k++){
                        visited[i][k] = 0;
                    }
                }
            }
        }
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    for(int k=0;k<matrix.size();k++){
                        visited[k][j] = 0;
                    }
                }
            }
        }
        matrix = visited;
    }
int main(){
    return 0;
}