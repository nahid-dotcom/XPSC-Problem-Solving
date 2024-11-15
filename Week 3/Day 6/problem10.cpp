#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
	int search(string pat, string txt) {
	    sort(pat.begin(),pat.end());
    int k=pat.size();
    map<char,int>mp1,mp2;
    for(char c:pat){
        mp2[c]++;
    }

    int cnt=0,l=0,r=0;
    while(r<txt.size()){
        mp1[txt[r]]++;
        if(r-l+1==k){
            if(mp1==mp2){
            cnt++;
            }
            mp1[txt[l]]--;
            if (mp1[txt[l]] == 0) {
                mp1.erase(txt[l]);
            }
            l++;
        }
        r++;
    }
    return cnt;
	}

};