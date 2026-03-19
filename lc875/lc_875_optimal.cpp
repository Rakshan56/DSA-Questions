#include<bits/stdc++.h>
using namespace std;
// here we are trying to create a formula to verify the gussed speed is right or not
bool caneat(vector<int>& piles, int h , int speed){
        int requiredhr = 0;
        for(int banana : piles){
            requiredhr += (banana + (speed - 1))/speed;
            if(requiredhr > h) return false;
        }
        return true;
}
// it is a simple binary search just to guess the speed 
int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(),piles.end());
        int ans = 0;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(caneat(piles,h,mid) == true){
                ans = mid;  
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return ans;
}

int main(){
    vector<int> piles = {3,6,7,11};

    int hours = 8;
    int minSpeed = minEatingSpeed(piles,hours);
    cout<<"To find the minimum eating speed for the koko : "<<minSpeed;

    return 0;

}