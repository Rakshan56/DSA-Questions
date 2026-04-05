#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int n ){

    if(n < 0) return false;
    int digit[10];
    int x = 0;
    int temp = n;
    while(temp > 0){
        digit[x++] = temp % 10;
        temp /= 10;
    }
    int start = 0 , end = x - 1;
    while(start < end){
        if(digit[start] != digit[end]) return false;
        start++;
        end--;
    }
    return true;
}

int main(){

    int n = 121;

    if(isPalindrome(n) == true){
        cout<<"it is a palindrome number";
    }else{
        cout<<"it is not a palindrome number";
    }

    return 0;
}