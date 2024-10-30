#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    map<string,int>mp;
    for(int i=0; i<n; i++){
        string a;
        cin>>a;
        mp[a]++;
        if(mp[a]==1){
            cout<<"NO"<<'\n';
        }
        else{
            cout<<"YES"<<'\n';
        }
    }

    return 0;
}