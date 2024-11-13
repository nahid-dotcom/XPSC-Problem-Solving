#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin>>n>>m;
    vector<int>a(n),b(m);
    map<int,int>mp;
    for(int i=0; i<n; i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    for(int i=0; i<m; i++){
        cin>>b[i];
    }
    long long int ans=0;
    for(int i=0; i<m; i++){
        if(mp.find(b[i])!=mp.end()){
            ans+=mp[b[i]];
        }
    }
    cout<<ans<<endl;
    


    return 0;
}