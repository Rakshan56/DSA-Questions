#include<bits/stdc++.h>
using namespace std;

// loop wala tarika
//     vector<int> twoSum(vector<int>& nums, int target) {
//         for (int i = 0; i < nums.size(); i++) {
//             for (int j = i + 1; j < nums.size(); j++) {
//                 if (nums[i] + nums[j] == target) {
//                     return {i, j};
//                 }
//             }
//         }
//         return {};
//     }
// };

vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> target_Sum;

        unordered_map<int,int> hash_table;
        for(int i = 0;i< nums.size();i++){
            int second_integer = target - nums.at(i);
            if(hash_table.find(second_integer) != hash_table.end()){
                target_Sum.push_back(i);
                target_Sum.push_back(hash_table.find(second_integer) -> second);
                break;
            }else{
         hash_table[nums.at(i)] = i;
            }
        }
    return target_Sum;
}

int main(){

    vector<int> nums = {2,7,11,15};
    int target = 9;

    vector<int> result = twoSum(nums ,target);
    cout<<"the combination is "<<result[0]<<" "<<result[1];

    return 0;
}