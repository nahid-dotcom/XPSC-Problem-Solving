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
        map<int,int>mp;
        vector<int>p(n);
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            mp[x]=i;
            p[i]=x;        
        }
        string s;
        cin>>s;
        vector<int>like,dislike;
        for(int i=0; i<n; i++){
            if(s[i]=='1'){
                like.push_back(p[i]);
            }
            else{
                dislike.push_back(p[i]);
            }
        }
        sort(like.begin(),like.end(),greater<int>());
        sort(dislike.begin(),dislike.end(),greater<int>());
        vector<int>v(like);
        v.insert(v.end(),dislike.begin(),dislike.end());
        sort(p.begin(),p.end(),greater<int>());
        vector<int>q(n);
        for(int i=0; i<n; i++){
            q[mp[v[i]]]=p[i];
        }
        for(auto value:q){
            cout<<value<<" ";
        }
        cout<<endl;


    }

    return 0;
}