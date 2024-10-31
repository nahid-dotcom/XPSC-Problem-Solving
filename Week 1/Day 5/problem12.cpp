#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string str=s;
    sort(s.begin(),s.end());
    s.erase(unique(s.begin(),s.end()),s.end());
    string rev=s;
    reverse(rev.begin(),rev.end());

    map<char,char> mp;
    for(int i=0; i<s.size(); i++){
        mp[s[i]]=rev[i];
    }
    string nw;
    for(int i=0; i<str.size(); i++){
        nw.push_back(mp[str[i]]);
    }
    cout<<nw<<endl;
    }

    return 0;
}