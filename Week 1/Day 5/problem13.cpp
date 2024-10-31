#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;
    map<int,int>mp;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        mp[a]++;
    }

    int rest=0;
    vector<int>nw;
    for(auto [x,y]:mp){
        nw.push_back(y);
    }
    int i=0;
    for(i; i<nw.size()-1; i++){
        if(nw[i]>nw[i+1]){
            rest=nw[i]-nw[i+1];
            nw[i+1]=nw[i+1]+rest;
        }
        else{
            rest=nw[i+1]-nw[i];
        }
    }
    cout<<nw[i]<<endl;

    return 0;
}