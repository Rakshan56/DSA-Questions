#include<bits/stdc++.h>
using namespace std;

double myPow(double x, int n) {
    long binForm = n;
    double ans = 1;

    if(binForm < 0) {
        x = 1.0 / x;
        binForm = -binForm;
    }

    while(binForm > 0){
        if(binForm % 2 == 1){
            ans *= x;
        }
        x *= x;
        binForm /= 2;
    }
    return ans;
}

int main(){

    double x = 2.0;
    int n = 10;

    double ans = myPow(x,n);

    cout<<"Answer is : "<<ans<<endl;
    return 0;
}