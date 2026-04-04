#include<bits/stdc++.h>
using namespace std;

int romanToInt(string s) {
    unordered_map<char,int> m;
    m['I'] = 1;
    m['V'] = 5;
    m['X'] = 10;
    m['L'] = 50;
    m['C'] = 100;
    m['D'] = 500;
    m['M'] = 1000;

    int result = 0;

    for(int i = 0;i<s.size();i++){
        if(m[s[i]] < m[s[i+1]]){
            result += (m[s[i+1]] - m[s[i]]);
            i++;
        }
        else{
            result += m[s[i]];
        }
    }
    return result;
}

int main(){

    string s = "III";

    int result = romanToInt(s);

    cout<<"The integer value of the Roman numeral "<<s<<" is: "<<result<<endl;

    return 0;
}