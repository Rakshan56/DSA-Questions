#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    int i = 0;
    for(int j = 1;j<nums.size();j++){
        if(nums[i] != nums[j]){
            i++;
            nums[i] = nums[j];
        }
    }
    return i+1;
}

int main(){

    vector<int> nums = {1,1,2};

    int result = removeDuplicates(nums);
    cout<<"the number of unique elements in the array is : "<<result<<endl;

    return 0;
}