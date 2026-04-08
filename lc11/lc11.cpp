#include<bits/stdc++.h>
using namespace std;

int maxArea(vector<int>& height){
    int left = 0 , right = height.size() - 1;
    int ans = 0;

    while(left < right){
        int width = right - left;
        int heightbox = min(height[left],height[right]);
        int waterArea = width * heightbox;
        if(height[left] < height[right]){
            left++;
        }
        else{
            right--;
        }
        if( ans < waterArea){
            ans = waterArea;
        }
    }
    return ans;
}

int main(){
    vector<int> heights = {1,8,6,2,5,4,8,3,7};

    int result = maxArea(heights);

    cout << result << endl;

    return 0;
}