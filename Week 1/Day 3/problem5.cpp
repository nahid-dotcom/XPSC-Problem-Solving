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
    vector<string>v1(n),v2(n),v3(n);
    map<string,int>mp;
    for(int i=0; i<n; i++){
        cin>>v1[i];
        mp[v1[i]]++;
    }
    for(int i=0; i<n; i++){
        cin>>v2[i];
        mp[v2[i]]++;
    }
    for(int i=0; i<n; i++){
        cin>>v3[i];
        mp[v3[i]]++;
    }

    int ans1=0,ans2=0,ans3=0;
    for(int i=0; i<n; i++){
        if(mp[v1[i]]==1){
            ans1+=3;
        }
        else if(mp[v1[i]]==2){
            ans1+=1;
        }
        
        if(mp[v2[i]]==1){
            ans2+=3;
        }
        else if(mp[v2[i]]==2){
            ans2+=1;
        }
        
        if(mp[v3[i]]==1){
            ans3+=3;
        }
        else if(mp[v3[i]]==2){
            ans3+=1;
        }
    }
    cout<<ans1<<" "<<ans2<<" "<<ans3<<'\n';
    }

    return 0;
}