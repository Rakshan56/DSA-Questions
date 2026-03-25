#include<bits/stdc++.h>
using namespace std;

// approach 1
// bool searchMatrix(vector<vector<int>>& matrix, int target){
//     int m = matrix.size();
//     int n = matrix[0].size();
//     int low = 0;
//     int high = m * n -1;
//     while(low <= high){
//         int mid = low + (high - low)/2;
//         int row = mid/n;
//         int call = mid%n;
//         if(matrix[row][call] == target) {
//             return true;
//         }else if(matrix[row][call] < target) {
//             low = mid + 1;
//         }else{
//             high = mid - 1;
//         }
//     }
//     return false;
// }

// appraoch 2
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
        {1,3,5,7},
        {10,11,16,20},
        {23,30,34,60}
    };

    int target = 3;

    if(searchMatrix(nums, target) == true) cout<<"Found";
    else cout<<"NotFound";

    return 0;
}   