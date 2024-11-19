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
    int l=0,r=0;
    long long ans=0,sum=0;
    while(r<n){
        sum+=v[r];
        if(sum<=s){
            ans+=(r-l+1);
        }
        else{
            while(sum>s && l<=r){
                sum-=v[l];
                l++;
            }
            if(sum<=s){
                ans+=(r-l+1);
            }
        }
        r++;
    }
    cout<<ans<<endl;

    return 0;
}