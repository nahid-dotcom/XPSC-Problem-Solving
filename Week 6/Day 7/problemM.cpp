#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
     
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        map<int,int>mp;
        for(int i=0; i<n; i++){
            cin>>v[i];
            mp[v[i]]++;
        }
        int mx=0;
        for(auto [x,y]:mp){
            if(mx<y){
                mx=y;
            }
        }
        long long ans=0;
        while(mx<n){
            ans++;
            int a=n-mx;
            if(a<=mx){
                ans+=a;
                mx+=a;
            }
            else{
                ans+=mx;
                mx+=mx;
            }

        }
        cout<<ans<<endl;
    }
    return 0;
}
