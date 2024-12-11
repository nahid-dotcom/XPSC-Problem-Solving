#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
     
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int>v(n);
        if(n>m || (n%2==0 && m%2!=0)){
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
            int cnt=0;
            if(n%2==0 && m%2==0){
                for(int i=0; i<n-2; i++){
                    v[i]=1;
                    cnt++;
                }
                m=m-cnt;
                for(int i=n-2; i<n; i++){
                    v[i]=m/2;
                }
                for(auto it:v){
                    cout<<it<<" ";
                }cout<<endl;
            }
            else{
                for(int i=0; i<n-1; i++){
                    v[i]=1;
                    cnt++;
                }
                m=m-cnt;
                v[n-1]=m;
                for(auto it:v){
                    cout<<it<<" ";
                }cout<<endl;
            }
        }
    }
    return 0;
}
