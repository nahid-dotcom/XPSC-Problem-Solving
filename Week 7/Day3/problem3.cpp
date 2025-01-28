#include <bits/stdc++.h>
using namespace std;
const int B=30;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
     
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }

        vector<int>bit(B+1);
        for(int i=0; i<n; i++){
            for(int j=B; j>=0; j--){
                if((v[i]>>j)&1){
                    bit[j]++;
                }
            }
        }
        long long ans=0;
        for(int i=B; i>=0; i--){
            if(bit[i]==n){
                ans+=(1LL<<i);
            }
            else{
                int x=n-bit[i];
                if(k>=x){
                    ans+=(1LL<<i);
                    k-=x;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
