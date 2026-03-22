#include<bits/stdc++.h>
using namespace std;

int mySqrt(int num){
    int low = 1, high = num, ans = 0;
    while(low <= high){
        long mid = low + (high - low)/2;
        long sq = mid*mid;
        if(sq <= num ){
            ans = mid;
            low = mid + 1;  
        }else{
            high = mid - 1;
        } 
    }
    return ans;
}

int main(){
    int num;
    cout<<"enter the number required to find the Square Root :";
    cin>>num;

    int result = mySqrt(num);
    cout<<"The square root of "<<num<<" is "<<result;

    return 0;
}