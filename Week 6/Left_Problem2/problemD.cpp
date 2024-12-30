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
        vector<int>v(n+1);
        for(int i=1; i<=n; i++){
            cin>>v[i];
        }
        int ans=0;
        for(int i=1; i<=n; i++){
            int a=ans, b=abs(v[i]-i);
            while(b!=0){
                int tmp=b;
                b=a%b;
                a=tmp;
            }
            ans=a;
        }
        cout<<ans<<endl;
    }
    return 0;
}
