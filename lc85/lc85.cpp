#include<bits/stdc++.h>
using namespace std;

int largestRectangleArea(vector<int>& arr) {
    int n = arr.size();
    vector<int> ans(n,-1) ;
    stack<int> st ;
    int maxi = 0 ;
    for(int i = 0 ;  i < n ;i++){
        while(!st.empty() && arr[st.top()] >= arr[i]){
            int h = arr[st.top()] ;
            st.pop();
            int pse = st.empty() ? -1 : st.top();
            int nse = i;
            int w = nse - pse - 1 ;
            int area = h * w ;
            maxi = max(maxi , area) ;
        }
        st.push(i) ;
    }

    while(!st.empty()){
        int h = arr[st.top()];
        st.pop();
        int nse = n ;
        int pse = st.empty() ? -1 : st.top();
        int w = nse - pse - 1 ;
        int area = h * w ;
        maxi = max(maxi , area) ;
    }
    return maxi ;
    }
int maximalRectangle(vector<vector<char>>& matrix) {
    int nr = matrix.size();
    int nc = matrix[0].size();
    vector<int> arr(nc , 0);
    int maxrec = 0 ;

    for(int i = 0 ; i < nr ; i++)
    {
        for(int j = 0 ; j < nc ; j++)
        {
            arr[j] = matrix[i][j] == '0' ? 0 : arr[j]+1 ;
        }

        int area = largestRectangleArea(arr);
        maxrec = max(maxrec , area) ;
    }
    return maxrec ;  
}

int main(){

    vector<vector<char>> matrix = {{'1','0','1','0','0'},
                                   {'1','0','1','1','1'},
                                   {'1','1','1','1','1'},
                                   {'1','0','0','1','0'}};

    int ans = maximalRectangle(matrix);
    cout<<" Maximal Rectangle is : "<<ans<<endl;

    return 0;
}