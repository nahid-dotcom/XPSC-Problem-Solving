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
        map<int,int>mp;
        for(int i=0; i<n; i++){
            cin>>v[i];
            mp[v[i]]++;
        }
        int cnt=0;
        sort(v.begin(),v.end());
        for(int i=0; i<n; i++){
            if(mp[v[i]]>0){
                cnt++;
                int a=v[i];
                while(mp.count(a) && mp[a]>0){
                    mp[a]--;
                    a++;
                }
            }
        }
        cout<<cnt<<endl;


    }

    return 0;
}