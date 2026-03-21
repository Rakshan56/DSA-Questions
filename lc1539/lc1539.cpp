#include<bits/stdc++.h>
using namespace std;

int findKthPositive(vector<int>& nums, int k){
    // brute force
    // for(int x : nums){
    //     if( x <= k){
    //         k++;
    //     }else{
    //         break;
    //     }
    // }
    // return k;

    // Optimal
    int low = 0; int high = nums.size() - 1;
    while(low <= high){
        int mid = low + (high - low)/2;
        int missingNum = nums[mid] - (mid + 1);
        if( missingNum < k) low = mid + 1;
        else high = mid - 1;
    }
    return k + low;
}

int main(){

    vector<int> nums = {2,3,4,7,11};
    int k = 5;

    int result = findKthPositive(nums,k);
    cout<<"The "<<k<<"th missing positive integer is "<<result;

    return 0;
}