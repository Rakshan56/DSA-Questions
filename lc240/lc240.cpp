#include<bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target){
    int row = 0;
    int call = matrix[0].size() - 1;

    while(row < matrix.size() && call > -1){
        int element = matrix[row][call];
        if(element == target){
            return true;
        }else if(element < target){
            row++;
        }else{
            call--;
        }
    }
    return false;
}

int main(){

    vector<vector<int>> nums={
        {1,4,7,11,15},
        {2,5,8,12,19},
        {3,6,9,16,22},
        {10,13,14,17,24},
        {18,21,23,26,30}
    };

    int target = 3;

    if(searchMatrix(nums, target) == true) cout<<"Found";
    else cout<<"NotFound";

    return 0;
}   