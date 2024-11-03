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
        string a,b;
        cin>>a>>b;
        bool flag=false;
        for(int i=0; i<n; i++){
            if(a[i]==b[i]) continue;
            else if(a[i]=='G' && b[i]=='B') continue;
            else if(a[i]=='B' && b[i]=='G') continue;
            else flag=true;
        }
        if(flag) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }

    return 0;
}