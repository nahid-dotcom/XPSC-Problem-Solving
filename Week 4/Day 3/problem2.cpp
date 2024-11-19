#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long s;
    cin>>n>>s;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int l=0,r=0,ans=INT_MAX;
    long long sum=0;
    while(r<n){
        sum+=v[r];
        if(sum>=s){
            ans=min(ans,r-l+1);
            while(sum>=s && l<=r){
                ans=min(ans,r-l+1);
                sum-=v[l];
                l++;
            }
        }
        r++;
    }
    if(ans==INT_MAX){
        cout<<"-1"<<endl;
    }
    else{
        cout<<ans<<endl;
    }

    return 0;
}