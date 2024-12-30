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
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        long long ans=0;
        bool flag=false;
        for(int i=0; i<n-1; i++){
            if(v[i]!=0 && !flag){
                flag=true;
            }
            if(flag){
                if(v[i]==0){
                    ans++;
                }
                else{
                    ans+=v[i];
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
