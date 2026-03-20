#include<bits/stdc++.h>
using namespace std;

bool canship(vector<int>& weigths, int days , int mxcapacity){
    int requiredays = 1;
    int currentload = 0;
    for( int w : weigths){
        if(currentload + w > mxcapacity){
            requiredays ++;
            currentload = w;
        }else{
            currentload += w;
        }
        if( requiredays > days){
            return false;
        }
    }
    return true;
}

int shipcapacity(vector<int>& weigths , int days){
    int low = *max_element (weigths.begin(), weigths.end());
    int high = accumulate (weigths.begin(), weigths.end(),0) ;
    int ans = 0;

    while(low <= high){
        int mid = low + (high - low)/2;
        if(canship ( weigths,days,mid) == true){
            ans = mid;
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return ans;
}

int main(){
    vector<int> weigths = {1,2,3,4,5,6,7,8,9,10};
    int days = 5;

    int capacity = shipcapacity (weigths, days);
    cout<< "the capacity of the ship to send the shipment in "<<days<<" is : "<<capacity ;
    return 0;
}