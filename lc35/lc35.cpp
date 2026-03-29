#include<bits/stdc++.h>
using namespace std;

int searchInsert(vector<int> nums, int target){
    int low = 0;
    int high = nums.size() - 1;
    int ans = 0;
    int mid = low + (high - low)/2;
    
    while(low <= high){
        int mid = low + (high - low)/2;
        if(nums[mid] == target ){
            ans = mid;
        }if(nums[mid] < target){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    return ans;
}

int main(){

    vector<int> nums = {1,3,5,6};
    int target = 5;

    int result = searchInsert(nums, target);
    cout<<"the result is "<<result<<" ";
    return 0;
}