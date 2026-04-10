#include<bits/stdc++.h>
using namespace std;

int largestRectangleArea(vector<int>& heights) {
    int n = heights.size();
    vector<int> ans (n, -1);
    stack<int> st;
    int maxi = 0;

    for(int i = 0; i<n; i++){
        while(!st.empty() && heights[st.top()] >= heights[i]){
            int height = heights[st.top()];
            st.pop();
            int pse = st.empty() ? -1 : st.top();
            int nse = i;
            int w = nse - pse - 1;
            int area = height * w;
            maxi = max(maxi, area);
        
        }
        st.push(i);
    }
    return maxi;
}

int main(){
    vector<int> heights = {2,1,5,6,2,3};

    int ans = largestRectangleArea(heights);

    cout<<"Largest Rectangle Area is : "<<ans<<endl;

    return 0;
}