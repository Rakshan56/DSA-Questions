#include<bits/stdc++.h>
using namespace std;

// stl approach to solve the question
// int majorityElement(vector<int>& nums){
//     sort(nums.begin(), nums.end());
//     return nums[nums.size() / 2];
//     // time complexity is : O( n log n )
// }

// map approch is used here
// int majorityElement(vector<int>& nums){
//     int n = nums.size();

//     unordered_map<int,int> mp;
//     for(int i = 0; i < n; i++){
//         mp[nums[i]]++;
//     }
//     for(auto it : mp){
//         if(it.second > n/2){
//             return it.first;
//         }
//     }
//     return -1;
// }

// moore voting algorithm is used here
int majorityElement(vector<int>& nums){
    int count = 0;
    int candidate = 0;

    for(int num : nums){
        if(count == 0){
            candidate = num;
        }
        if(num == candidate){
            count++;
        }
        else{
            count--;
        }
    }
    return candidate;
}

int main(){

    vector<int> nums = {2,2,1,1,1,2,2};
    
    int result = majorityElement(nums);

    cout<<"the majorty element is : "<<result;

    return 0;
}