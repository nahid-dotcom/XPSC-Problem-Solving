#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>a(n),h(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++){
            cin>>h[i];
        }
        int l=0,r=1,ans=0;
        long long sum=a[0];
        if(sum<=k){
            ans=1;
        } 
        while(r<n){
            if(h[r-1]%h[r]==0){
                sum+=a[r];
            }
            else{
                sum=a[r];
                l=r;
            }
            while(sum>k){
                sum-=a[l];
                l++;
            }
            ans=max(ans,r-l+1);
            r++;
        }
        cout<<ans<<endl;   
         
    }

    return 0;
}