#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
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
        string s;
        cin>>s;
        vector<long long>pre(n);
        pre[0]=v[0];
        for(int i=1; i<n; i++){
            pre[i]=pre[i-1]+v[i];
        }
        int l=n-1,r=0;
        long long sum=0;
        while(r<n){
            if(s[r]=='L'){
                while(l>r && s[l]!='R'){
                    l--;
                }
                if(l>r){
                    long long a=pre[l];
                    if(r>0){
                        a-=pre[r-1];
                    }
                    sum+=a;
                    l--;
                }
            }
            r++;
        }
        cout<<sum<<endl;
        
    }    

    return 0;
}