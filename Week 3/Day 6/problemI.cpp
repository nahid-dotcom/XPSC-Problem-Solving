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
        int arr[n][n-1];
        for(int i=0; i<n; i++){
            for(int j=0; j<n-1; j++){
                cin>>arr[i][j];
            }
        }
        map<int,int>mp;
        set<int>s;
        for(int i=0; i<n; i++){
            for(int j=0; j<1; j++){
                mp[arr[i][j]]++;
                s.insert(arr[i][j]);
            }
        }
        int mx=INT_MIN,value;
        for(auto it:s){
            if(mp[it]>mx){
                mx=mp[it];
                value=it;
            }
        }
        vector<int>v;
        v.push_back(value);

        int second;
        for(auto it:s){
            if(it!=value){
                second=it;
            }
        }
        int detec=-1;
        for(int i=0; i<n; i++){
            for(int j=0; j<1; j++){
                if(second==arr[i][j]){
                    detec=i;
                    break;
                }
            }
        }
        for(int i=detec; i<n; i++){
            for(int j=0; j<n-1; j++){
                v.push_back(arr[i][j]);
            }
            break;
        }
        for(auto it:v){
            cout<<it<<" ";
        }cout<<endl;

    }

    return 0;
}