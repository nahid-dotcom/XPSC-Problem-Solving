#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    vector<int>pre(n);
    pre[0]=v[0];
    for(int i=1; i<n; i++){
        pre[i]=pre[i-1]+v[i];
    }
    int l=0,r=0,ans=0;
    while(r<n){
        if(pre[r]==k){
            ans=max(ans,r-l+1);
        }
        r++;
    }
    cout<<ans<<endl;
    

    return 0;
}