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
        long long a=v[n-2];
        for(int i=0; i<n-2; i++){
            a-=v[i];
        }
        long long ans=v[n-1]-a;
        cout<<ans<<endl;
    }
    return 0;
}
