#include<bits/stdc++.h>
using namespace std;

int longestValidParentheses(string s) {
    stack<int> st;
    st.push(-1); 
    int maxLength = 0;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == '('){
            st.push(i);
        } else {
            st.pop();
            if(st.empty()){
                st.push(i);
            } else {
                maxLength = max(maxLength,i - st.top());
            }
        }
    }
    return maxLength;
}

int main(){

    string s = "(()";

    int ans = longestValidParentheses(s);

    cout<<"Longest Valid Parentheses is : "<<ans;

    return 0;
}