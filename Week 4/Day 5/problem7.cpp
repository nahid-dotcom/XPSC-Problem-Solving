#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        vector<int>v(n);
        int sum=0;
        for(int i=0; i<n; i++){
            cin>>v[i];
            if(v[i]==1){
                sum+=v[i];
            }
        }
        if(sum<s){
            cout<<"-1"<<endl;
        }
        else if(s==sum){
            cout<<"0"<<endl;
        }
        else{
            int l=0,r=0,ans=INT_MIN;
            int L_sum=0;
            while(r<n){
                L_sum+=v[r];
                if(L_sum<=s){
                    ans=max(ans,r-l+1);
                }
                else{
                    while(L_sum>s){
                        L_sum-=v[l];
                        l++;
                    }
                }
                r++;
            }
            cout<<n-ans<<endl;
        }
    }

    return 0;
}