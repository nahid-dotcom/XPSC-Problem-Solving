#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    map<char,int>mp;
    for(int i=0; i<s.size(); i++){
        mp[s[i]]++;
    }
    string find="None";
    for(int i=0; i<26; i++){
        if(mp[char(97+i)]==0){
            find=char(97+i);
            break;
        }
    }
    cout<<find<<endl;
    return 0;
}   