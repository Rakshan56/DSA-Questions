#include<bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> ans;

    int rows = matrix.size();
    int col = matrix[0].size();

    int count = 0;
    int total = rows*col;

    //index
    int startrow = 0;
    int startcol = 0;
    int endrow = rows-1;
        int endcol = col-1;

    while(count < total){
        for(int index = startcol ;count < total && index<=endcol ; index ++){
            ans.push_back(matrix[startrow][index]);
            count++;
        }
        startrow++;
        for(int index = startrow ;count < total && index<=endrow ; index ++){
            ans.push_back(matrix[index][endcol]);
            count++;
        }
        endcol--;
        for(int index = endcol ;count < total && index>=startcol ; index--){
            ans.push_back(matrix[endrow][index]);
            count++;
        }
        endrow--;
        for(int index = endrow;count < total && index>=startrow ; index--){
            ans.push_back(matrix[index][startcol]);
            count++;
        }
        startcol++;
    }
    return ans;
}

int main(){

    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};

    vector<int> ans = spiralOrder(matrix);

    cout<<"The spiral order of the given matrix is : "<<endl;
    for(int i = 0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}