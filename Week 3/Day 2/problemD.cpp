#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    vector<string>v;
    deque<string>result;
    map<string,int>mp;
    string s;
    for(int i=0; i<n; i++){
        string a;
        cin>>a;
        v.push_back(a);

    }
    for(int i=n-1; i>=0; i--){
        string a=v[i];
        mp[a]++;
        if(mp[a]==1){
            result.push_back(a);
        }
    }
    for(auto it:result){
        string sub=it.substr(it.size()-2);
        s+=sub;
    }
    cout<<s<<endl;

    return 0;
}