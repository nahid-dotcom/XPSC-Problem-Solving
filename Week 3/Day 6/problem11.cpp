#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n,k,q;
        cin>>n>>k>>q;
        vector<int>v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        long long int ans=0,sub=0;
        for(int i=0; i<n; i++){
            if(v[i]<=q){
               sub++;
            }
            else{
                if(sub>=k){
                    long long int sz=(sub-k)+1;
                    long long int cnt=((sz*(sz+1)))/2;
                    ans+=cnt;
                }
                sub=0;
            }

        }
         if(sub>=k){
            long long int sz=(sub-k)+1;
            long long int cnt=((sz*(sz+1)))/2;
            ans+=cnt;
        }
        cout<<ans<<endl;

    }

    return 0;
}