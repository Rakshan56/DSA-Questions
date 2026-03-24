#include<bits/stdc++.h>
using namespace std;

bool checkSum(vector<int>& nums, int k, int minsum){
    int requiredk = 1;
    int currentsum = 0;
    for(int n : nums){
        if(currentsum + n > minsum){
            requiredk++;
            currentsum = 0;
            currentsum = n;
            if(requiredk > k) return false;
        }else{
            currentsum += n;
        }
    }
    return true;
}

int splitArray(vector<int>& nums, int k){
    int low = *max_element(nums.begin(),nums.end());
    int high = accumulate(nums.begin(),nums.end(),0);

    // brute force
    // for(int cap = low; cap <= high; cap++){
    //     if(checkSum(nums, k, cap) == true){
    //         return cap;
    //     }
    // }
    // return -1;

    // binary search 
    int ans = 0;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(checkSum(nums, k, mid) == true){
            ans = mid;
            high = mid - 1; 
        }else{
            low = mid + 1;
        }
    }
    return ans;
}

int main(){

    vector<int> nums = {7,2,5,10,8};

    int k = 2;

    int result = splitArray(nums,k);

    cout<<"the minimized largest sum of the split is :"<<result;

    return 0;
}