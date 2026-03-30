#include<bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums){
    int maxi = nums[0];
    int largesum = 0;

    for(int x : nums){
        largesum += x;
        maxi = max(maxi,largesum);
        if(largesum < 0){
            largesum = 0;
        }
    }
    return maxi;
}

int main(){

    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};

    int result = maxSubArray(nums);

    cout<<"the largest sub of the sub array is : "<<result;

    return 0;
}