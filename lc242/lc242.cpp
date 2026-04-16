#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t){
    if(s.length() != t.length()) {
        return false;
    }

    unordered_map<char,int> countS;
    unordered_map<char,int> countT;
    for(int i = 0; i < s.length(); i++){
        countS[s[i]]++;
        countT[t[i]]++;
    }
    return countS == countT;
}

int main(){

    string s = "anagram";
    string t = "nagaram";

    bool ans = isAnagram(s,t);

    if(ans == true) cout<<"It is an anagram";
    else cout<<"It is not an anagram";

    return 0;
}