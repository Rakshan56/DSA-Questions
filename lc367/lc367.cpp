#include<bits/stdc++.h>
using namespace std;

bool isPerfectSquare(int num) {
    long left = 1, right = num;
    while(left <= right){
        long mid = left + (right - left)/2;
        long square = mid * mid;

        if(square == num) return true;
        else if(square < num) left = mid + 1;
        else right = mid - 1;
    }
    return false;
}

int main(){

    int num = 16;

    if(isPerfectSquare(num) == true){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }
    return 0;
}