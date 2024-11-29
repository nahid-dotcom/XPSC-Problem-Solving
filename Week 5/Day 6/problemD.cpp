#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>a(n+1);
        for(int i=0; i<n; i++){
            a[i]=i+1;
        }
        vector<int>b(k);
        int x=n;
        for(int i=0; i<k; i++){
            b[i]=x;
            x--;
        }
        vector<int>ans;
        for(int i=0; i<k; i++){
            ans.push_back(b[i]);
        }
        for(int i=0; i<n-k; i++){
            ans.push_back(a[i]);
        }
        reverse(ans.begin(),ans.end());
        for(auto it:ans){
            cout<<it<<" ";
        }cout<<endl;
        

    }

    return 0;
}