#include<bits/stdc++.h>
using namespace std;

int firstIndex(vector<int> nums, int target){
    int low = 0, high = nums.size() - 1, ans = -1;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(nums[mid] == target){
            ans = mid;
            high = mid - 1; // keep searching left
        } else if(nums[mid] < target){
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return ans;
}

int lastIndex(vector<int> nums, int target){
    int low = 0, high = nums.size() - 1, ans = -1;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(nums[mid] == target){
            ans = mid;
            low = mid + 1; // keep searching right
        } else if(nums[mid] < target){
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return ans;
}

vector<int> searchRange(vector<int>& nums, int target){
    return {firstIndex(nums,target),lastIndex(nums, target)};
}

int main(){

    vector<int> nums = {5,7,7,8,8,10};
    int target = 8;

    vector<int> result = searchRange(nums, target);
    cout<<"the result is "<<result[0]<<" "<<result[1];
    return 0;
}